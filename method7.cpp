#include <iostream>

#include "method7.h"
#include "LCG.h"


double rand7() {
	double u[2];
	for (size_t i = 0; i < 2; i++) {
		u[i] = LCG();
	}

	double v1 = 2 * u[0] - 1;
	double v2 = 2 * u[1] - 1;
	 
	double s = v1 * v1 + v2 * v2;
	if (s >= 1) {
		return rand7();
	}
	else {
		double x1 = v1 * sqrt(-2 * log(s) / s);
		double x2 = v1 * sqrt(-2 * log(s) / s);
		return x1;
	}
}