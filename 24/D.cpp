#include <iostream>

using namespace std;

static const long MOD = 1000000007;

long power(long x, long n) {
	if (n == 0) return 1;
	if (n % 2 == 0) return power(x * x % MOD, n / 2);
	else return x * power(x, n - 1) % MOD;
}

long inv(long x) {
	return power(x, MOD - 2);
}

int main(int argc, char *argv[]) {
	long A, B, C;
	cin >> A >> B >> C;

	long c = (B * C % MOD - A * B % MOD + MOD) * inv(A * C % MOD - B * C % MOD + A * B % MOD + MOD) % MOD;
	long r = (B * C % MOD - A * C % MOD + MOD) * inv(A * B % MOD - B * C % MOD + A * C % MOD + MOD) % MOD;

	cout << r << " " << c << endl;

	return 0;
}