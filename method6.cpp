#include <iostream>
#include <algorithm>

#include "method6.h"
#include "LCG.h"

static const double m = 0, s = 1;
double sum() {
	double sum = 0;
	double u[6];
	for (size_t i = 0; i < 6; i++) {
		u[i] = LCG();
		sum += u[i];
	}
	return sum;
}
double rand6() {
	double x;
	x = m + (sum() - 6)*s;
	return x;
}
