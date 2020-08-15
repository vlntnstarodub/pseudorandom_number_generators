#include <iostream>

#include "ICG.h"

static const int a = 29962, c = 12437;
static int x0 = 5289, p = 53;
void sICG(int seed) {
	x0 = seed;
}

int inverse(int x) {
	if (x == 0) return 0;
	else for (int x1 = 0; x1 < p; x1++) {
		if ((x*x1) % p == 1) return x1;
	}
}
int ICG_int() {
	int x = inverse(x0);
	x0 = (a*x + c) % p;
	return x0;
}
double ICG() {
	return ICG_int() / double(p);
}