#pragma once

template <typename T, int VAL>
T addVal(T const& x) {
	return x + VAL;
}

// Nontype (=values) template parameters: constant integral values (including enumerations)
// or pointers to objects with external linkage.