#pragma once
#include "antlr4-runtime.h"
using namespace antlrcpp;
#include "vector"
using namespace std;
#include "Object.h"

namespace MegaScrypt
{
	class Array : public Object, public vector<Any>
	{
	public:
		Array()
		{
			list = vector<Any>();
			Bind();;
		}

		Array(vector<Any> objs);

		inline vector<Any> toVector() { return list; }
		inline size_t Count() { return list.size(); }

		inline Any get(size_t index) { return list[index]; }
		inline void set(size_t index, Any val) { list[index] = val; }

		void Bind();

		Any& operator[](size_t index)
		{
			return list[index];
		}

		Any _add(vector<Any> objs);
		Any _addRange(vector<Any> objs);
		Any _insert(vector<Any> objs);
		Any _removeAt(vector<Any> objs);
		Any _clear(vector<Any> objs);

		void Add(Any obj);
		void AddRange(vector<Any> objs);
		void Insert(int index, Any obj);
		bool RemoveAt(int index);
		void Clear();

	protected:
		vector<Any> list;
	};
}
