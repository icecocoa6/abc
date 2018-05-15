#include <iostream>

using namespace std;

static const long MOD = 1000000007;

long fact[200001];
long fact_inv[200001];

long C(long n, long r) {
	return (fact[n] * fact_inv[r] % MOD) * fact_inv[n - r] % MOD;
}

long pow(long x, long n) {
	if (n == 0) return 1;
	if (n % 2) return x * pow(x, n - 1) % MOD;
	else return pow(x * x % MOD, n / 2);
}

int main(int argc, char *argv[]) {
	fact[0] = 1;
	for (long i = 1; i <= 200000; i++) fact[i] = i * fact[i - 1] % MOD;

	fact_inv[200000] = pow(fact[200000], MOD - 2);
	for (int i = 199999; i > 0; i--) fact_inv[i] = fact_inv[i + 1] * (i + 1) % MOD;
	fact_inv[0] = 1;

	int n, k;
	cin >> n >> k;
	cout << C(n + k - 1, k) << endl;
	return 0;
}