#pragma once

namespace cpp_class1 {
	double GetPi();
	double GetHalfPi();
	double GetQuarterPi();
	double GetDoublePi();
	int GetAbsoluteValue(const int number);
	float GetPow2(const int number);
	float GetSqrt(const int number);
	unsigned int GetFact(const unsigned int number);
	int Min(const int number1, const int number2);
	int Max(const int number1, const int number2);
	int Mod(const int number1, const int number2);
	bool IsOdd(const int number1);
	bool IsEven(const int number1);
	int IsBetween(const int number1, const int number2, const int numberToTest);
	int Clamp(const int number1, const int number2, const int numberToTest);
	int NearestNumber(const int number1, const int number2, const int numberToTest);
}