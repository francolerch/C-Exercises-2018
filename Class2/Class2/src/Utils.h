#pragma once
#include <iostream>
#include <limits>

#define print(x) std::cout << x << std::endl;

namespace cpp_class2 {
	void printSizes();
	float GetSqrt(const int number);

	template<typename T>
	bool areEqual(const T &num1, const T &num2)
	{
		double epsilon = std::numeric_limits<T>::epsilon();

		if (std::abs(num1 - num2) < epsilon)
		{
			return true;
		}
		else
		{
			return false;
		}
	};
};