#include <iostream>
#include <vector>
#include <bitset>

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

	long m = 0;
	for (int i = 1; i < (1 << 4); i++) {
		bitset<4> bits(i);
		int x = X, y = Y;
		if (bits[0]) x -= 1;
		if (bits[1]) x -= 1;
		if (bits[2]) y -= 1;
		if (bits[3]) y -= 1;
		long c = count(x, y, D, L);
		int sign = (bits.count() % 2) ? 1 : -1;
		m = (m + sign * c + MOD) % MOD;
	}
	long cnt = (count(X, Y, D, L) - m + MOD) % MOD;
		
	cout << ((cnt * (R - X + 1) % MOD) * (C - Y + 1) % MOD) << endl;

	return 0;
}