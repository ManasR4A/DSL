#include "Array.h"
#include "NativeFunction.h"
#include "Machine.h"

namespace MegaScrypt
{
#define _bindFunction(_name, _funct) declare(new NativeFunction(_name, vector<string>(), [this](vector<Any> params) -> Any { return this->_funct(params); } ))

	Array::Array(vector<Any> objs)
	{
		AddRange(objs);
		Bind();
	}

	void Array::Bind()
	{
		_bindFunction("Add", _add);
		_bindFunction("AddRange", _addRange);
		_bindFunction("Insert", _insert);
		_bindFunction("RemoveAt", _removeAt);
		_bindFunction("Clear", _clear);
		declare(string("Count"), [this]() -> Any {return (int)this->list.size(); });

	}

	Any Array::_add(vector<Any> objs)
	{
		Add(objs[0]);
		return Any();
	}

	Any Array::_addRange(vector<Any> objs)
	{
		Array* a = objs[0].as<Array*>();
		AddRange(a->toVector());
		return Any();
	}

	Any Array::_insert(vector<Any> objs)
	{
		Insert(objs[0], objs[1]);

		return Any();
	}

	Any Array::_removeAt(vector<Any> objs)
	{
		bool ret = RemoveAt(objs[0]);
		return Any(ret);
	}

	Any Array::_clear(vector<Any> objs)
	{
		Clear();
		return Any();
	}

	void Array::Add(Any obj)
	{
		list.push_back(obj);
	}

	void Array::AddRange(vector<Any> objs)
	{
		for (auto obj : objs)
		{
			list.push_back(obj);
		}
	}

	void Array::Insert(int index, Any obj)
	{
		auto it = list.begin() + index;
		list.insert(it, obj);
	}

	bool Array::RemoveAt(int index)
	{
		if (index < list.size())
		{
			list.erase(list.begin() + index);
			return true;
		}
		return false;
	}

	void Array::Clear()
	{
		list.empty();
	}
}