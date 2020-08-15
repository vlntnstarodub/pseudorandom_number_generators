#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

#include "method8.h"
#include "LCG.h"
#include "ICG.h"


double rand8() {
	double u = LCG();
	double v = ICG();
	double x = sqrt(8 / M_E)* ((v - 0.5) / u);
	if (x*x <= 5 - 4 * pow(M_E, 0.25)*u)return x;
	if (x*x >= (4 * pow(M_E, -1.35)) / u + 1.4) return rand8();
	if (x*x > -4 * log(u)) return rand8();
	return x;
}