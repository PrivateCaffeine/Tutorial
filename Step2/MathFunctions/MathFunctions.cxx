#include "MathFunctions.h"

#ifdef USE_MYMATH
#	include "mysqrt.h"
#endif
#include <cmath>

// Hide mysqrt
double mathfunctions::sqrt(double x) {
#ifdef USE_MYMATH
	return mysqrt(x);
#else
	return std::sqrt(x);
#endif
}