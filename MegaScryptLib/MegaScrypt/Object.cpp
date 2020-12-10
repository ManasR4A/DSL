#include "Object.h"
#include "IFunction.h"

using namespace MegaScrypt;

Object::Object(Object* parent)
{
	this->parent = parent;
}

void Object::Declare(string varName, Any value)
{
	auto search = variables.find(varName);
	if (search != variables.end())
	{
		throw exception("Variable %s already declared"), varName;
	}

	else
	{
		if (varName == "prototype")
		{
			parent = value.as<Object*>();
			return;
		}
		variables.insert(make_pair(varName, value));
	}
}

Any Object::Get(string varName, bool allowParentChaining)
{
	auto search = variables.find(varName);

	if (varName == "prototype")
	{
		return parent;
	}

	if (getters.find(varName) != getters.end())
		return getters[varName]();

	if (search != variables.end())
	{
		return variables[varName];
	}

	else if (allowParentChaining && parent != nullptr)
	{
		return parent->Get(varName, true);
	}

	else
	{
		throw exception("Variable %s not declared"), varName;
	}
}

int MegaScrypt::Object::HasFunction(string functName)
{
	int index = 0;
	for (auto funct : functs)
	{
		if (funct->Name() == functName)
			return index;
		index++;
	}
	return NULL;
}

IFunction* MegaScrypt::Object::GetFuctionPtr(string functName)
{
	int index = HasFunction(functName);
	if (index >= 0)
		return functs[index];
	else
		return nullptr;
}


void Object::Set(string varName, Any value, bool allowParentChaining)
{
	if (varName == "prototype")
	{
		parent = value.as<Object*>();
		return;
	}
	if (setters.find(varName) != setters.end())
	{
		setters[varName](value);
		return;
	}
		

	auto search = variables.find(varName);
	if (search != variables.end())
	{
		variables[varName] = value;
		return;
	}

	else if (allowParentChaining && parent != nullptr)
	{
		parent->Set(varName, value, true);
	}

	else
	{
		throw exception("Variable %s not declared"), varName;
	}
}

bool Object::Has(string varName, bool allowParentChaining)
{

	if (varName == "prototype")
	{
		return parent != nullptr;
	}

	if (setters.find(varName) != setters.end())
		return true;

	auto search = variables.find(varName);
	if (search != variables.end())
		return true;

	else if (allowParentChaining && parent != nullptr)
	{
		return parent->Has(varName, true);
	}

	return false;

}

void MegaScrypt::Object::declare(string name, Getter getter, Setter setter)
{
	auto getterpair = make_pair(name, getter);
	getters.insert(getterpair);
	
	auto setterpair = make_pair(name, setter);
	setters.insert(setterpair);
}

void MegaScrypt::Object::declare(string name, Getter getter)
{
	auto getterpair = make_pair(name, getter);
	getters.insert(getterpair);
}

void MegaScrypt::Object::declare(IFunction* i_funct)
{
	functs.push_back(i_funct);
}
