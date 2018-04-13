#include <iostream>
#include <cmath>

using namespace std;

int num_digits(long n) {
	int i = 1;
	while (n >= 10) { n /= 10; i++; }
	return i;
}

int main(int argc, char *argv[]) {
	long N;
	cin >> N;

	int ans = 100;
	for (long A = 1; A <= sqrt(N); A++) {
		if (N % A != 0) continue;

		long B = N / A;
		ans = min(ans, max(num_digits(A), num_digits(B)));
	}

	cout << ans << endl;

	return 0;
}
