#include <iostream>

using namespace std;

static const long MOD = 1000000007;

long fact[200001];
long fact_inv[200001];

long pow(long m, long n) {
	if (n == 0) return 1;
	if (n % 2 == 0) return pow(m * m % MOD, n / 2);
	else return m * pow(m, n - 1) % MOD;
}

int main(int argc, char *argv[]) {
	fact[0] = 1;
	for (int i = 1; i <= 200000; i++)
		fact[i] = i * fact[i - 1] % MOD;
	fact_inv[0] = 1;
	for (int i = 1; i <= 200000; i++)
		fact_inv[i] = pow(fact[i], MOD - 2);

	int W, H;
	cin >> W >> H;
	W--, H--;
	cout << ((fact[W + H] * fact_inv[W] % MOD) * fact_inv[H] % MOD) << endl;

	return 0;
}