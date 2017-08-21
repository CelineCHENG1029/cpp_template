#include "stdafx.h"

inline int const& max(int const& a, int const& b) {
	return a > b ? a : b;
}

template <typename T>
inline T const& max(T const& a, T const& b) {
	return a > b ? a : b;
}

template <typename T>
inline T const& max(T const& a, T const& b, T const& c) {
	return max(max(a, b), c);
}
