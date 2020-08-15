#include <iostream>

#include "union.h"
#include "LCG.h"
#include "SCG.h"
#include "prime.h"

static const int m = m_is_prime();
static int z0 = 5289;
void sUnion(int seed) {
	z0 = seed;
}

int rUnion_int () {

	int x0 = LCG()*m;
	int y0 = SCG()*m;
	z0 = (x0 - y0 + m) % m;
	return z0;
}
double rUnion() {
	return rUnion_int() / double(m);
}