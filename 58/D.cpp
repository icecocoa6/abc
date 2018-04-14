#include <iostream>

using namespace std;

static const long MOD = 1000000007;

int main(int argc, char *argv[]) {
	int n, m;
	cin >> n >> m;

	long xs = 0;
	for (int i = 1; i <= n; i++) {
		long x;
		cin >> x;
		xs = (xs + (-n + 2L * i - 1) * x + MOD) % MOD;
	}

	long ys = 0;
	for (int i = 1; i <= m; i++) {
		long y;
		cin >> y;
		ys = (ys + (-m + 2L * i - 1) * y + MOD) % MOD;
	}

	cout << (xs * ys) % MOD << endl;

	return 0;
}