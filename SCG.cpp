#include <iostream>

#include "SCG.h"
#include "prime.h"
using namespace std;
static const int m = 13873, a = 836, c = 12345, d = 7;
static int x0 = 1;
void sSCG(int seed) {
	x0 = seed;
}

int SCG_int() {
	x0 = (d*x0*x0 +a*x0 + c)%m;

	return x0;
}
double SCG() {
	return SCG_int() / double(m);
}