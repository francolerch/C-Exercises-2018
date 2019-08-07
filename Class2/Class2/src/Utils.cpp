#include "Utils.h"

namespace cpp_class2 {
	template<typename T>
	void printUtil()
	{
		print("Size: " << sizeof(T) << " bytes");
		print("Min Value: " << std::numeric_limits<T>::min() << " bytes");
		print("Max Value: " << std::numeric_limits<T>::max() << " bytes");
		std::cout << std::endl;
	};

	template<>
	void printUtil<char>()
	{
		print("Size: " << sizeof(char) << " byte");
		print("Min Value: " << static_cast<int>(std::numeric_limits<char>::min()) << " bytes");
		print("Max Value: " << static_cast<int>(std::numeric_limits<char>::max()) << " bytes");
		std::cout << std::endl;
	};

	void printSizes() {
		print("char");
		printUtil<char>();
		print("short int");
		printUtil<short int>();
		print("unsigned short int");
		printUtil<unsigned short int>();
		print("int");
		printUtil<int>();
		print("unsigned int");
		printUtil<unsigned int>();
		print("long long");
		printUtil<long long>();
		print("float");
		printUtil<float>();
		print("double");
		printUtil<double>();
	};

	float GetSqrt(const int number) {
		float low = 0;
		float high = static_cast<float>(number);
		float mid;

		while (high - low > 0.0000001) {
			mid = low + (high - low) / 2;
			if (mid * mid > number) {
				high = mid;
			}
			else {
				low = mid;
			}
		}
		return mid;
	};

};