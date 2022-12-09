#pragma once

template <class T>
constexpr T max(const T a, const T b) {
	return a > b ? a : b;
}

template <class T>
constexpr T maxdata(const T* array) {
	T temp = 0;
	for (int i = 0;; ++i, temp = max<T>(array[i], temp)) {
		if (array[i] == -1) {
			return temp;
		}
	}
	return temp;
}
