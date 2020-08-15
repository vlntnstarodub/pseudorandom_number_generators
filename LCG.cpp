#include <iostream>

#include "LCG.h"
#include "prime.h"

static const int m = m_is_prime(), a = 29962, c = 12437;
static int x0 = 5289;
void sLCG(int seed) {
	x0 = seed;
}

int LCG_int() {
	
	x0 = (a*x0 + c) % m;
	
	return x0;

}
double LCG() {
	return LCG_int() / double(m);
}