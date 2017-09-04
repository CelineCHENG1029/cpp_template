#pragma once

#include <deque>
#include <stdexcept>

template <typename T>
class Stack {
private:
	std::deque<T> elems;

public:
	void push(T const&);
	void pop();
	T top() const;
	bool empty() const {
		return elems.empty();
	};
	// assign stack of elements of type T2
	template <typename T2>
	Stack<T>& operator= (Stack<T2> const&);
};