#pragma once

#include <stdexcept>

template <typename T, int MAXSIZE>
// template <typename T=int, int MAXSIZE=100>
class Stack {
private:
	T elems[MAXSIZE];
	int numElems;
public:
	Stack();
	void push(T const&);
	void pop();
	T top() const;
	bool empty() const {
		return numElems == 0;
	};
	bool full() const{
		return numElems == MAXSIZE;
	};
};

template <typename T, int MAXSIZE>
Stack<T, MAXSIZE>::Stack() : numElems(0) {

}

template <typename T, int MAXSIZE>
void Stack<T, MAXSIZE>::push(T const& elem) {
	if (numElems == MAXSIZE) {
		throw std::out_of_range("Stack<>::push(): stack is full");
	}
	elems[numElems] = elem;
	++numElems;
}

template <typename T, int MAXSIZE>
void Stack<T, MAXSIZE>::pop() {
	if (numElems == 0) {
		throw std::out_of_range("Stack<>::pop(): stack is empty");
	}
	--numElems;
}

template <typename T, int MAXSIZE>
T Stack<T, MAXSIZE>::top() const {
	if (numElems == 0) {
		throw std::out_of_range("Stack<>::top(): stack is empty");
	}
	return elems[numElems-1];
}