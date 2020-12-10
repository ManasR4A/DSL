#include "pch.h"

#include "gtest/gtest.h"

#include "CppUnitTest.h"
#include "MegaScrypt.h"
#include <string>

//using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace MegaScrypt;
using namespace std;

namespace MegaScryptTests
{
	namespace PA1Tests
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

			template <class T>
			void AssertXYZ(string script, T expectedX, T expectedY, T expectedZ)
			{
				Machine machine;
				machine.Execute(script);

				T x = machine.Evaluate("x").as<T>();
				EXPECT_EQ(expectedX, x);

				T y = machine.Evaluate("y").as<T>();
				EXPECT_EQ(expectedY, y);

				T z = machine.Evaluate("z").as<T>();
				EXPECT_EQ(expectedZ, z);
			}

			// simple operations
			TEST(TestExpressions, T1) { EXPECT_EQ(Evaluate<int>("-314"), -314); }
			TEST(TestExpressions, T2) { EXPECT_EQ(Evaluate<int>("1 + 1"), 1 + 1); }
			TEST(TestExpressions, T3) { EXPECT_EQ(Evaluate<int>("0 - 72"), 0 - 72); }
			TEST(TestExpressions, T4) { EXPECT_EQ(Evaluate<int>("3 * 4"), 3 * 4); }
			TEST(TestExpressions, T5) { EXPECT_EQ(Evaluate<int>("2 * 0"), 2 * 0); }
			TEST(TestExpressions, T6) { EXPECT_EQ(Evaluate<int>("100 / 10"), 100 / 10); }
			TEST(TestExpressions, T7) { EXPECT_EQ(Evaluate<int>("5/3"), 5 / 3); }

			// float operations
			TEST(TestExpressions, T8) { EXPECT_EQ(Evaluate<float>("2.0 / 4.0"), 2.0f / 4.0f); }
			TEST(TestExpressions, T9) { EXPECT_EQ(Evaluate<float>("1.5 * 2"), 1.5f * 2); }
			TEST(TestExpressions, T10) { EXPECT_EQ(Evaluate<float>("14 * 1."), 14 * 1.0f); }
			TEST(TestExpressions, T11) { EXPECT_EQ(Evaluate<float>("-314."), -314.f); }
			TEST(TestExpressions, T12) { EXPECT_EQ(Evaluate<float>("1.0 + 1"), 1.0f + 1); }
			TEST(TestExpressions, T13) { EXPECT_EQ(Evaluate<float>("0.0 - 72"), 0.0f - 72); }
			TEST(TestExpressions, T14) { EXPECT_EQ(Evaluate<float>("3. * 4.000"), 3.0f * 4.0f); }
			TEST(TestExpressions, T15) { EXPECT_EQ(Evaluate<float>("2 * 0."), 2 * 0.0f); }
			TEST(TestExpressions, T16) { EXPECT_EQ(Evaluate<float>("100 / 10.0"), 100 / 10.0f); }
			TEST(TestExpressions, T17) { EXPECT_EQ(Evaluate<float>("5 / 3.0"), 5 / 3.0f); }

			// order of operations
			TEST(TestExpressions, T18) { EXPECT_EQ(Evaluate<int>("1 + 2 * 3"), 1 + 2 * 3); }
			TEST(TestExpressions, T19) { EXPECT_EQ(Evaluate<int>("(1 + 2) * 3"), (1 + 2) * 3); }
			TEST(TestExpressions, T20) { EXPECT_EQ(Evaluate<int>("3 + 6 / 2"), 3 + 6 / 2); }
			TEST(TestExpressions, T21) { EXPECT_EQ(Evaluate<int>("(3 + 6) / 2"), (3 + 6) / 2); }

			// boolean operations
			TEST(TestExpressions, T22) { EXPECT_EQ(Evaluate<bool>("!false || false"), !false || false); }
			TEST(TestExpressions, T23) { EXPECT_EQ(Evaluate<bool>("false || !false"), false || !false); }
			TEST(TestExpressions, T24) { EXPECT_EQ(Evaluate<bool>("!true && true"), !true && true); }
			TEST(TestExpressions, T25) { EXPECT_EQ(Evaluate<bool>("true && !true"), true && !true); }
			TEST(TestExpressions, T26) { EXPECT_EQ(Evaluate<bool>("true || true && false"), true || true && false); }
			TEST(TestExpressions, T27) { EXPECT_EQ(Evaluate<bool>("!true"), !true); }
			TEST(TestExpressions, T28) { EXPECT_EQ(Evaluate<bool>("!false"), !false); }

			// comparison operators
			TEST(TestExpressions, T29) { EXPECT_EQ(Evaluate<bool>("5 > 3"), 5 > 3); }
			TEST(TestExpressions, T30) { EXPECT_EQ(Evaluate<bool>("-5 > 3"), -5 > 3); }
			TEST(TestExpressions, T31) { EXPECT_EQ(Evaluate<bool>("1 >= 1"), 1 >= 1); }
			TEST(TestExpressions, T32) { EXPECT_EQ(Evaluate<bool>("1 >= 0"), 1 >= 0); }
			TEST(TestExpressions, T33) { EXPECT_EQ(Evaluate<bool>("0 >= 1"), 0 >= 1); }
			TEST(TestExpressions, T34) { EXPECT_EQ(Evaluate<bool>("2 < -10"), 2 < -10); }
			TEST(TestExpressions, T35) { EXPECT_EQ(Evaluate<bool>("-2 < 10"), -2 < 10); }
			TEST(TestExpressions, T36) { EXPECT_EQ(Evaluate<bool>("-2 <= 10"), -2 <= 10); }
			TEST(TestExpressions, T37) { EXPECT_EQ(Evaluate<bool>("2 <= 2"), 2 <= 2); }
			TEST(TestExpressions, T38) { EXPECT_EQ(Evaluate<bool>("2. < 3 && 3 >= 0"), 2.0f < 3 && 3 >= 0); }
			TEST(TestExpressions, T39) { EXPECT_EQ(Evaluate<bool>("5 > 3 == true || 1. > -1 != false"), 5 > 3 == true && 1.0f > -1 != false); }

			// blocks & scope
			TEST(TestBlocks, T40) {
				AssertXYZ<int>("\
var x = 5;\
var y = 10;\
var z;\
{\
	var y;\
	y = -4;\
	z = y;\
}", 5, 10, -4);
			}
			TEST(TestBlocks, T41) {
				AssertXYZ<int>("\
var x = 5;\
var y = 10;\
var z = 3;\
{\
	y = -x;\
}", 5, -5, 3);
			}

			// if / else if / else

			TEST(TestIf, T42) {
				Execute<bool>("\
var x = 5;\
var pass = false;\
if(x > 0) {\
	pass = true;\
}", "pass", true);
			}

			TEST(TestIf, T43) {
				Execute<bool>("\
var x = 5;\
var pass = false;\
if(x > 0) {\
	pass = true;\
} else {\
	pass = false;\
}", "pass", true);
			}

			TEST(TestIf, T44) {
				Execute<bool>("\
var x = 5;\
var pass = false;\
if(x < 0) {\
	pass = false;\
} else {\
	pass = true;\
}", "pass", true);
			}

			TEST(TestIf, T45) {
				Execute<bool>("\
var pass = false;\
if(-1 > 0) {\
	pass = false;\
} else if(1 < 0) {\
	pass = false;\
} else if(2 == 3) {\
	pass = false;\
} else {\
	pass = true;\
}", "pass", true);
			}

			TEST(TestIf, T46) {
				Execute<bool>("\
var pass = false;\
if(1 > 0)\
	pass = true;\
else if(1 < 0) \
	pass = false;\
else if(2 == 3)\
	pass = false;\
else\
	pass = false;", "pass", true);
			}

			// increment / decrement

			TEST(TestVariables, T47) {
				Execute<int>("\
var x = 0;\
x++;\
++x;", "x", 2);
			}

			TEST(TestVariables, T48) {
				Execute<int>("\
var x = 0;\
x--;\
--x;", "x", -2);
			}

			TEST(TestVariables, T49) {
				Execute<int>("\
var x = 0;\
x++;\
x--;\
++x;\
--x;", "x", 0);
			}

			TEST(TestVariables, T50) {
				Execute<int>("\
var y = 0;\
var x = y++;", "x", 0);
			}

			TEST(TestVariables, T51) {
				Execute<int>("\
var y = 0;\
var x = ++y;", "x", 1);
			}

			TEST(TestVariables, T52) {
				Execute<int>("\
var y = 0;\
var x = y--;", "x", 0);
			}

			TEST(TestVariables, T53) {
				Execute<int>("\
var y = 0;\
var x = --y;", "x", -1);
			}

			// assignment operators
			
			TEST(TestVariables, T54) {
				Execute<int>("\
var i = -514;\
i *= 10;\
", "i", -514 * 10);
			}

			TEST(TestVariables, T55) {
				Execute<float>("\
var f = -514;\
f /= 10.0;\
", "f", -514 / 10.f);
			}

			TEST(TestVariables, T56) {
				Execute<float>("\
var f = 103.;\
f += 10;\
", "f", 103.f + 10);
			}

			TEST(TestVariables, T57) {
				Execute<int>("\
var i = 103;\
i -= 10;\
", "i", 103 - 10);
			}

			// string assignment & operations
			
			TEST(TestVariables, T58) {
				ExpectString("var x = \"hello world\";", "x", "hello world");
			}

			TEST(TestVariables, T59) {
				ExpectString("var a = \"hello \"; var b = \"world\"; var x = a + b;", "x", "hello world");
			}

			TEST(TestVariables, T60) {
				ExpectString("var x = \"hello \"; x += \"world\";", "x", "hello world");
			}


			TEST(TestVariables, T61) {
				ExpectString("var x = \"world\"; x = \"hello \" + x;", "x", "hello world");
			}

			// nulls

			TEST(TestVariables, T62) {
				IsNull("var x;", "x");
			}

			TEST(TestVariables, T63) {
				IsNull("var x = null;", "x");
			}

			TEST(TestVariables, T64) {
				Execute<bool>("\
var y = 5;\
var x = false;\
if(y != null)\
	x = true;\
", "x", true);
			}

			TEST(TestVariables, T65) {
				Execute<bool>("\
var y = null;\
var x = false;\
if(y == null)\
	x = true;\
", "x", true);
			}

			// booleans
			
			TEST(TestVariables, T66) {
				Execute<bool>("var b = true && false;", "b", false);
			}

			TEST(TestVariables, T67) {
				Execute<bool>("var b = true || false;", "b", true);
			}

			TEST(TestVariables, T68) {
				Execute<bool>("var a = false; var b = !a;", "b", true);
			}


			// objects

			TEST(TestVariables, T69) {
				Execute<int>("\
var obj = {\
	x: 3,\
	y: -4\
};\
", "obj.y", -4);
			}

			TEST(TestVariables, T70) {
				Execute<int>("\
var obj = {\
	child: {\
		x: 26,\
		y: 200,\
		z: 1\
	},\
	x: 3,\
	y: -4\
};\
", "obj.child.x", 26);
			}

			TEST(TestVariables, T71) {
				Execute<int>("\
var obj = {\
	child: {\
		x: 26,\
		y: 200,\
		z: 1\
	},\
	x: 3,\
	y: -4\
};\
obj.child.z = 5009;\
", "obj.child.z", 5009);
			}

			TEST(TestVariables, T72) {
				Execute<int>("\
var x = 10;\
var y = 12;\
var z = 14;\
var obj = {\
	position: {\
		x: x,\
		y: y,\
		z: z\
	}\
};\
", "obj.position.z", 14);
			}

			TEST(TestVariables, T73) {
				ExpectString("\
var summer = {\
	name: \"Summer\",\
	age: 17,\
	brother: null\
};\
var morty = {\
	name: \"Morty\",\
	age: 14,\
	sister: summer\
};\
summer.brother = morty;\
", "morty.sister.name", "Summer");
			}

			// comments
			
			TEST(TestComments, T74) {
				Execute<bool>("\
var pass = true;\
// pass = false;\
", "pass", true);
			}

			TEST(TestComments, T75) {
				Execute<bool>("\
var pass = true;\
/*\
	pass = false;\
	multiline comment\
*/\
/* pass = false; */\
", "pass", true);
			}

			// error handling

			TEST(TestErrors, T76) {
				ExpectException("invalid syntax");
			}

			TEST(TestErrors, T77) {
				vector<string> texts;
				texts.push_back("undeclared");
				texts.push_back("not declared");
				ExpectException("x = 5;", texts);
			}

			TEST(TestErrors, T78) {
				vector<string> texts;
				texts.push_back("redeclared");
				texts.push_back("already declared");
				ExpectException("var x = 5; var x = 2;", texts);
			}

			TEST(TestErrors, T79) {
				vector<string> texts;
				texts.push_back("undeclared");
				texts.push_back("not declared");
				ExpectException("var y = 0; var z = x + y;", texts);
			}
	}
}