#include <iostream>

using namespace std;

const long MOD = 1000000007;

long fact[200001];
long fact_inv[200001];

long binomial(long n, long k) {
	if (n < k) return 0;
	return (((fact[n] * fact_inv[k]) % MOD) * fact_inv[n - k]) % MOD;
}

long power(long n, long p) {
	if (p == 0) return 1;
	if (p % 2 == 0) return power((n * n) % MOD, p / 2);
	else return (n * power(n, p - 1)) % MOD;
}

int main(int argc, char *argv[]) {
	long H, W, A, B;
	cin >> H >> W >> A >> B;

	fact[0] = 1;
	for (int i = 1; i <= 200000; i++)
		fact[i] = (fact[i - 1] * i) % MOD;

	fact_inv[0] = 1;
	for (int i = 1; i <= 200000; i++)
		fact_inv[i] = power(fact[i], MOD - 2);

	long ans = 0;
	for (long x = B; x < W; x++) {
		long y = H - A - 1;
		long x2 = W - 1 - x;
		long y2 = A - 1;

		ans = (ans + (binomial(x + y, y) * binomial(x2 + y2, y2)) % MOD) % MOD;
	}

	cout << ans << endl;
	return 0;
}