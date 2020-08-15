#include <iostream>

#include "method9.h"
#include "LCG.h"

static const double m = 10;

double rand9() {
	double u = LCG();
	double x = -m * log(u);
	return x;
}