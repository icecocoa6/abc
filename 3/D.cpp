#include <iostream>
#include <vector>

using namespace std;

static const long MOD = 1000000007;

long fact[901];
long fact_inv[901];

long pow(long x, long n) {
	if (n == 0) return 1;
	if (n % 2) return x * pow(x, n - 1) % MOD;
	return pow(x * x % MOD, n / 2);
}

long binom(long n, long k) {
	return (fact[n] * fact_inv[n - k] % MOD) * fact_inv[k] % MOD;
}

long count(long X, long Y, long D, long L) {
	if (X < 0 || Y < 0 || X * Y < D + L) return 0;
	return binom(X * Y, D) * binom(X * Y - D, L) % MOD;
}

int main(int argc, char *argv[]) {
	long R, C, X, Y, D, L;
	cin >> R >> C >> X >> Y >> D >> L;

	fact[0] = 1;
	for (int i = 1; i <= 900; i++) fact[i] = i * fact[i - 1] % MOD;
	fact_inv[0] = 1;
	for (int i = 1; i <= 900; i++) fact_inv[i] = pow(fact[i], MOD - 2);

	long ans = 0;
	// 4つの領域について包除原理
	ans = count(X, Y, D, L);
	ans = (ans - 2 * count(X - 1, Y, D, L) % MOD + MOD) % MOD;
	ans = (ans - 2 * count(X, Y - 1, D, L) % MOD + MOD) % MOD;
	ans = (ans + count(X - 2, Y, D, L)) % MOD;
	ans = (ans + 4 * count(X - 1, Y - 1, D, L) % MOD) % MOD;
	ans = (ans + count(X, Y - 2, D, L)) % MOD;
	ans = (ans - 2 * count(X - 2, Y - 1, D, L) % MOD + MOD) % MOD;
	ans = (ans - 2 * count(X - 1, Y - 2, D, L) % MOD + MOD) % MOD;
	ans = (ans + count(X - 2, Y - 2, D, L)) % MOD;

	ans = (ans * (R - X + 1) % MOD) * (C - Y + 1) % MOD;
		
	cout << ans << endl;

	return 0;
}