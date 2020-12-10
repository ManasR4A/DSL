#include "pch.h"

#include "gtest/gtest.h"

#include "CppUnitTest.h"
#include "MegaScrypt.h"
#include <string>

using namespace MegaScrypt;
using namespace std;

namespace MegaScryptTests
{
	namespace PA2Tests
	{
		template <class T>
		T Evaluate(string expression)
		{
			Machine machine;
			Any result = machine.Evaluate(expression);
			T value = result.as<T>();
			return value;
		}

		template <class T>
		void Execute(string script, string expression, T expected)
		{
			Machine machine;
			machine.Execute(script);

			T value = machine.Evaluate(expression).as<T>();
			EXPECT_EQ(expected, value);
		}

		void ExpectString(string script, string expression, string expected)
		{
			Machine machine;
			machine.Execute(script);

			Any result = machine.Evaluate(expression);
			if (result.is<string>())
				EXPECT_EQ(expected, result.as<string>());
			else
				EXPECT_EQ(expected, *result.as<string*>());
		}

		void IsNull(string script, string expression)
		{
			Machine machine;
			machine.Execute(script);

			Any result = machine.Evaluate(expression);
			EXPECT_TRUE(result.isNull());
		}

		void ExpectException(string script, vector<string> matches = vector<string>())
		{
			bool exceptionThrown = false;
			string message;
			try
			{
				Machine machine;
				machine.Execute(script);
			}
			catch (exception e)
			{
				exceptionThrown = true;
				message = e.what();
			}

			EXPECT_TRUE(exceptionThrown);

			if (matches.size() > 0)
			{
				bool match = false;
				for (int i = 0; i < matches.size(); i++)
				{
					if (message.find(matches[i]) != string::npos)
					{
						match = true;
						break;
					}
				}
				EXPECT_TRUE(match);
			}
		}

		static int fibSeq[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 };

		void TestFibonacci(int n)
		{
			string script = "\
				var Fib = function(var n) {\
				if (n <= 1)\
					return n;\
				return Fib(n - 1) + Fib(n - 2);\
			};\
			";
			Execute<int>(script, "Fib(" + to_string(n) + ")", fibSeq[n]);
		}

		TEST(TestFunction, T1) { TestFibonacci(0); }
		TEST(TestFunction, T2) { TestFibonacci(1); }
		TEST(TestFunction, T3) { TestFibonacci(2); }
		TEST(TestFunction, T4) { TestFibonacci(3); }
		TEST(TestFunction, T5) { TestFibonacci(4); }
		TEST(TestFunction, T6) { TestFibonacci(5); }
		TEST(TestFunction, T7) { TestFibonacci(6); }

		void TestFactorial(int n, int expected)
		{
			string script = "\
var Factorial = function(var n) {\
	if (n <= 1)\
		return 1;\
	return n * Factorial(n - 1);\
};";
			Execute<int>(script, "Factorial(" + to_string(n) + ")", expected);
		}

		TEST(TestFunction, T8) { TestFactorial(0, 1); }
		TEST(TestFunction, T9) { TestFactorial(1, 1); }
		TEST(TestFunction, T10) { TestFactorial(2, 2); }
		TEST(TestFunction, T11) { TestFactorial(3, 3*2); }
		TEST(TestFunction, T12) { TestFactorial(4, 4*3*2); }
		TEST(TestFunction, T13) { TestFactorial(5, 5*4*3*2); }
		TEST(TestFunction, T14) { TestFactorial(6, 6*5*4*3*2); }

		TEST(TestPrototype, T15) {
			string script = "\
			var unit = {\
				name: null,\
				hp : 100,\
				attack : 10\
			};\
			var unit1 = {\
				prototype: unit,\
				name : \"Berserker\",\
				hp : 50\
			};\
			";
			Execute<int>(script, "unit1.hp", 50);
			ExpectString(script, "unit1.name", "Berserker");
			Execute<int>(script, "unit1.attack", 10);
		}

		TEST(TestFunction, T38) {
			string script = "\
var obj = {\
	Add: function(var a, var b) {\
		return a + b;\
	}\
};\
obj.Add(1, 2) = 4;\
";
			ExpectException(script);
		}

		TEST(TestPrototype, T16) {
			string script = "\
var unit1 = {\
	name: \"Berserker\",\
	hp : 50,\
	Damage : function(var amount) {\
		hp -= amount;\
	}\
};\
var origHp = unit1.hp;\
unit1.Damage(10);\
";
			Execute<int>(script, "origHp", 50);
			Execute<int>(script, "unit1.hp", 40);
		}

		TEST(TestPrototype, T17) {
			string script = "\
var unit = {\
	name: null,\
	hp : 100,\
	Damage : function(var amount) {\
			hp -= amount;\
		}\
	};\
\
var unit1 = {\
	prototype: unit,\
	name : \"Berserker\",\
	hp : 50\
};\
var origHp = unit1.hp;\
unit1.Damage(10);\
";
			Execute<int>(script, "origHp", 50);
			Execute<int>(script, "unit1.hp", 40);
		}

		TEST(TestArray, T18) {
			Array* a = new Array(vector<Any>({ 13, 7, 5, 3, 1 }));
			Machine machine;
			machine.Declare("a", a);
			EXPECT_EQ(5, machine.Evaluate("a[2]").as<int>());
			delete a;
			//string script = "var a = [13, 7, 5, 3, 1];";
			//Execute<int>(script, "a[2]", 5);

		}

		TEST(TestArray, T19) {
			string script = "\
var obj = { list: [1, 2, 3] };\
obj.list[1] = 4;\
";
			Execute<int>(script, "obj.list[1]", 4);
		}

		TEST(TestArray, T20) {
			Array* a = Evaluate<Array*>("[1, 2, 3, 4]");
			EXPECT_TRUE(a != NULL);
		}

		TEST(TestArray, T21) {
			string script = "\
var list = [1, 2, 3];\
list.Add(4);\
";
			Execute<int>(script, "list[3]", 4);
		}

		TEST(TestArray, T22) {
			string script = "\
var a = [1, 2, 3];\
var b = [4, 5, 6];\
a.AddRange(b);\
";
			Execute<int>(script, "a[3]", 4);
		}

		TEST(TestArray, T23) {
			string script = "\
var list = [1, 2, 3];\
list.Insert(1, 4);\
";
			Execute<int>(script, "list[0]", 1);
			Execute<int>(script, "list[1]", 4);
			Execute<int>(script, "list[2]", 2);
		}

		TEST(TestArray, T24) {
			string script = "\
var list = [1, 2, 3];\
list.RemoveAt(0);\
";
			Execute<int>(script, "list[0]", 2);
		}

		TEST(TestArray, T25) {
			string script = "\
var list = [1, 2, 3];\
var a = list.Count;\
list.AddRange([4, 5, 6, 7]);\
var b = list.Count;\
";
			Execute<int>(script, "a", 3);
			Execute<int>(script, "b", 7);
		}

		void TestArrayNesting(int i, int j, int expected)
		{
			string script = "\
var a = [\
	[0, 1, 2, 3],\
	[4, 5, 6, 7],\
	[8, 9, 10, 11],\
	[12, 13, 14, 15]\
];\
";
			Execute<int>(script, "a[" + to_string(i) + "][" + to_string(j) + "]", expected);
		}

		TEST(TestArray, T27) { TestArrayNesting(0, 0, 0); }
		TEST(TestArray, T28) { TestArrayNesting(1, 2, 6); }
		TEST(TestArray, T29) { TestArrayNesting(2, 1, 9); }
		TEST(TestArray, T30) { TestArrayNesting(3, 3, 15); }

		TEST(TestLoops, T31) {
			string script = "\
var x = 1;\
for (var i = 0; i < 5; i++) {\
	x *= 2;\
}\
";
			Execute<int>(script, "x", 32);
		}

		TEST(TestLoops, T32) {
			string script = "\
var list = [1, 3, 5, 7, 9];\
var sum = 0;\
foreach(var i in list) {\
	sum += i;\
}\
";
			Execute<int>(script, "sum", 25);
		}

		TEST(TestLoops, T33) {
			string script = "\
var x = 0;\
while (x < 10)\
{\
	x++;\
}\
";
			Execute<int>(script, "x", 10);
		}

		TEST(TestLoops, T34) {
			string script = "\
var x = 0;\
do\
{\
	x++;\
} while (x < 10);\
";
			Execute<int>(script, "x", 10);
		}

		TEST(TestLoops, T35) {
			string script = "\
var x = 0;\
while (true) {\
	x++;\
	if (x > 5)\
		break;\
}\
";
			Execute<int>(script, "x", 6);
		}

		TEST(TestLoops, T36) {
			string script = "\
var list = [];\
for(var i = 0; i < 10; i++) {\
	if (i % 2 == 0)\
		continue;\
	list.Add(i);\
}\
";
			Execute<int>(script, "list.Count", 5);
			Execute<int>(script, "list[0]", 1);
			Execute<int>(script, "list[1]", 3);
			Execute<int>(script, "list[2]", 5);
			Execute<int>(script, "list[3]", 7);
			Execute<int>(script, "list[4]", 9);
		}


		TEST(TestComplexScript, T37) {
			string script = "\
var unit = {\
	name: null,\
	hp : 20,\
	shield : 0,\
	attack : 7,\
	Damage : function(var amount) {\
		if (shield > 0) {\
			shield -= amount;\
			return;\
		}\
		hp -= amount;\
	},\
	IsAlive: function() { return hp > 0; }\
};\
var u1 = {\
	prototype: unit,\
	name : \"Unit 1\",\
	hp : 25,\
	shield : 20\
};\
var u2 = {\
	prototype: unit,\
	name : \"Unit 2\",\
	attack : 15\
};\
\
var rounds = 0;\
while (u1.IsAlive() && u2.IsAlive())\
{\
	rounds++;\
	u2.Damage(u1.attack);\
	u1.Damage(u2.attack);\
}\
\
var winner;\
if (u1.IsAlive() && !u2.IsAlive())\
	winner = u1.name;\
else if (!u1.IsAlive() && u2.IsAlive())\
	winner = u2.name;\
else\
	winner = \"Tie\";\
";
			ExpectString(script, "winner", "Unit 1");
			Execute<int>(script, "u1.hp", 10);
			Execute<int>(script, "u2.hp", -1);
			Execute<int>(script, "rounds", 3);

		}
	}
}