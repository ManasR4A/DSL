#pragma once

#include <string>
using namespace std;

#include "antlr4-runtime.h"
using namespace antlrcpp;


namespace MegaScrypt
{
	class IFunction;
	class Object
	{
	public:
		typedef function<Any()> Getter;
		typedef function<void(Any)> Setter;

		Object(Object* parent = nullptr);

		void Declare(string varName, Any value);
		Any Get(string varName, bool allowParentChaining = true);
		void Set(string varName, Any value, bool allowParentChaining = true);
		bool Has(string varName, bool allowParentChaining = true);

		int HasFunction(string);
		IFunction* GetFuctionPtr(string);

		void declare(string name, Getter getter, Setter setter);
		void declare(string name, Getter getter);
		void declare(IFunction* i_funct);

	protected:
		Object* parent = nullptr;
		std::map<string, Any> variables;
		map<string, Getter> getters;
		map<string, Setter> setters;
		vector<IFunction*> functs;
		
	};
}