#include "prime.h"
bool is_prime(int n) {
	if (n == 1) return false;
	for (int i = 2; i < n / 2. + 1; i++) {
		return (n%i) != 0;
	}
}
int m_is_prime() {
	for (int i = max_is_prime; i > 1; i--) {
		if (is_prime(i)) return i;
	}
}