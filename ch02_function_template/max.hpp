#pragma once

template <typename T>
//template <class T> // also works
inline T const& max(T const& a, T const& b) {
	return a > b ? a : b;
}

template <typename RT, typename T1, typename T2>
inline RT const& max(T1 const& a, T2 const& b) {
	return a > b ? a : b;
}

template <typename T1, typename T2, typename RT>
inline RT const& max(T1 const& a, T2 const& b) {
	return a > b ? a : b;
}

