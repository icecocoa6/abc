#include <iostream>
#include <cmath>

using namespace std;

long f(long b, long n) {
	long result = 0;
	while (n >= b) {
		result += n % b;
		n /= b;
	}
	return result + n;
}

int main(int argc, char *argv[]) {
	long n, s;
	cin >> n >> s;
	long sqrtn = sqrt(n);

	if (n < s) {
		printf("-1\n");
		return 0;
	}
	if (n == s) {
		cout << n + 1 << endl;
		return 0;
	}

	for (long b = 2; b <= sqrtn; b++) {
		if (f(b, n) == s) {
			cout << b << endl;
			return 0;
		}
	}

	for (long p = sqrtn; p > 0; p--) {
		long b = (n - s) / p + 1;
		if (b < 2 || f(b, n) != s) continue;
		cout << (n - s) / p + 1 << endl;
		return 0;
	}

	printf("-1\n");

	return 0;
}