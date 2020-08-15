#define _USE_MATH_DEFINES
#include <cmath>

#include <iostream>

#include "method10.h"
#include "LCG.h"
#include "ICG.h"

static const double a = 10;

double rand10() {
	double u = LCG();
	double y = tan(M_PI*u);
	double x = sqrt(2 * a - 1)*y + a - 1;
	if (x <= 0) return rand10();
	double v = ICG();
	if (v > (1 + y * y)*exp((a - 1)*log(x / (a - 1)) - sqrt(2 * a - 1)*y)) return rand10();
	return x;
}