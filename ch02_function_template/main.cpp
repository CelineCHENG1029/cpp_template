// tmp_sty.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include "max.hpp"
// #include "max2.cpp" // overload
//#include "max3.cpp" // overload

using namespace std;

int main()
{
	// max.hpp
	// int i = 42;
	// cout << "max int is: " << ::max(7, i) << endl;
	// double f1 = 0.2;
	// double f2 = 32.3;
	// cout << "max double is: " << ::max(f1, f2) << endl;
	// string s1 = "math";
	// string s2 = "mathmatics";
	// cout << "max string is: " << ::max(s1, s2) << endl;
	cout << ::max<int, double, double>(4, 12.3) << endl;
	cout << ::max<double>(4, 12.3) << endl;
	
	// max2.cpp
	// cout << ::max(7, 42, 68) << endl;
	// cout << ::max(7.0, 42.0) << endl;
	// cout << ::max('a', 'b') << endl;
	// cout << ::max(7, 42) << endl;
	// cout << ::max<>(7, 42) << endl;
	// cout << ::max<double>(7, 42) << endl;
	// cout << ::max('a', 42.7) << endl; // nontemplate

	// max3.cpp
	// int a = 7, b = 42;
	// cout << ::max(a, b) << endl;
	// string s1 = "hey";
	// string s2 = "you";
	// cout << ::max(s1, s2) << endl;
	// int* p1 = &a;
	// int* p2 = &b;
	// cout << (*::max(p1, p2)) << endl;
	// const char* c1 = "David";
	// const char* c2 = "Nico";
	// cout << ::max(c1, c2) << endl;
	system("pause");
    return 0;
}
