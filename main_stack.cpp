// tmp_sty.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <deque>
#include <algorithm>
#include <vector>

// #include "stack1.hpp"
// #include "stack3.hpp"
#include "stack4.hpp"
#include "addval.hpp"

// typedef Stack<Stack<int> > intStackStack; // pay attention to whitespace betweeen two >

using namespace std;

int main()
{
	// stack1.hpp
	// try {
	// 		Stack<int> intStack;
	// 		Stack<std::string> stringStack;
	// 
	// 		intStack.push(7);
	// 		cout << intStack.top() << endl;
	// 
	// 		stringStack.push("hello");
	//		cout << stringStack.top() << endl;
	// 		stringStack.pop();
	// 		stringStack.pop();
	// }
	// catch (std::exception const& ex) {
	// 		std::cerr << "Exception: " << ex.what() << endl;
	// 		return EXIT_FAILURE;
	// }

	// stack3.hpp
	/*try {
		Stack<int> intStack;
		Stack<double, std::deque<double> > dbStack;

		intStack.push(7);
		cout << intStack.top() << endl;

		dbStack.push(42.42);
		cout << dbStack.top() << endl;
		dbStack.pop();
		dbStack.pop();
	}
	catch (std::exception const& ex) {
		std::cerr << "Exception: " << ex.what() << endl;
		return EXIT_FAILURE;
	}*/

	// stack4.hpp
	/*try {
		Stack<int, 20> int20Stack;
		Stack<int, 40> int40Stack;
		Stack<std::string, 40> string40Stack;

		int20Stack.push(8);
		std::cout << int20Stack.top() << std::endl;
		int20Stack.pop();

		string40Stack.push("hello");
		cout << string40Stack.top() << endl;
		string40Stack.pop();
		string40Stack.pop();
	}
	catch (std::exception const& ex) {
		std::cerr << "Exception: " << ex.what() << endl;
		return EXIT_FAILURE;
	}*/

	int arr[] = {1, 3, 5};
	std::vector<int> source(arr, arr + sizeof(arr) / sizeof(arr[0]));
	std::vector<int> dest(3); // must be initialized otherwise no begin()
	std::transform(source.begin(), source.end(),
		dest.begin(),
		//addVal<int, 5>);
		(int(*)(int const&)) addVal<int, 5>);

	for (int val : dest) {
		cout << val << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}

