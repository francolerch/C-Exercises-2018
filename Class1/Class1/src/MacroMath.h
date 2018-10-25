#pragma once
#include <cmath>

#define PI 3.14159274f
#define HALF_PI PI / 2.0f
#define QUARTER_PI HALF_PI / 2.0f
#define DOUBLE_PI PI * 2
#define AbsoluteValue(x) std::abs(x)
#define Pow2(x) std::pow(x, 2)
#define Sqrt(x) std::sqrt(x)
#define Fact(x) ((x) <= 1 ? 1 : \
                 (x) == 2 ? 2 : \
                 (x) == 3 ? 6 : \
                 (x) == 4 ? 24 : \
                 (x) == 5 ? 120 : \
                 (x) == 6 ? 720 : \
                 (x) == 7 ? 5040 : \
                 (x) == 8 ? 40320 : \
                 (x) == 9 ? 362880 : \
                 (x) == 10 ? 3628800 : \
                 (x) == 11 ? 39916800 : \
                 (x) == 12 ? 479001600 : INT_MAX)