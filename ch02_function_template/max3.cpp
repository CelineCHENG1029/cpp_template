#include "stdafx.h"
#include <iostream>

template <typename T>
inline T const& max(T const& a, T const& b) {
	return a > b ? a : b;
}

template <typename T>
inline T* const& max(T* const& a, T* const& b) {
	return *a > *b ? a : b;
}

inline const char* const& max(const char* const& a, const char* const& b) {
	return std::strcmp(a, b)>0 ? a : b;
}