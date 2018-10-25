#include "FunMath.h"
#include "MacroMath.h"

namespace cpp_class1 {

	double GetPi() {
		return PI;
	};

	double GetHalfPi() {
		return HALF_PI;
	};

	double GetQuarterPi() {
		return QUARTER_PI;
	};

	double GetDoublePi() {
		return DOUBLE_PI;
	};

	int GetAbsoluteValue(const int &number) {
		if (number >= 0)
			return number;
		else return number * (-1);
	};

	float GetPow2(const int &number) {
		return number * number;
	};

	float GetSqrt(const int &number) {
		double low = 0;
		double high = number;
		double mid;

		while (high - low > 0.0000001) {
			mid = low + (high - low) / 2;
			if (mid*mid > number) {
				high = mid;
			}
			else {
				low = mid;
			}
		}
		return mid;
	};

	unsigned int GetFact(const unsigned int &number) {
		if (number == 0)
			return 1;
		else
			return number * GetFact(number - 1);
	}

	int Min(const int &number1, const int &number2) {
		if (number1 >= number2)
			return number2;
		return number1;
	};

	int Max(const int &number1, const int &number2) {
		if (number1 <= number2)
			return number2;
		return number1;
	}

	int Mod(const int &number1, const int &number2) {
		return GetAbsoluteValue(number1 - number2);
	}

	bool IsOdd(const int &number1) {
		if (number1 % 2 != 0)
			return true;
		return false;
	};

	bool IsEven(const int &number1) {
		return !IsOdd(number1);
	};

	int IsBetween(const int &number1, const int &number2, const int &numberToTest) {
		if (numberToTest < Max(number1, number2) && numberToTest > Min(number1, number2))
			return true;
		return false;
	};

	int NearestNumber(const int &number1, const int &number2, const int &numberToTest) {
		if (Mod(number1, numberToTest) >= Mod(number2, numberToTest))
			return number2;
		return number1;
	};

	int Clamp(const int &number1, const int &number2, const int &numberToTest) {
		if (IsBetween(number1, number2, numberToTest)) {
			return numberToTest;
		}
		return NearestNumber(number1, number2, numberToTest);
	};
}