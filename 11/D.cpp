#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double CC[1001][1001];

double C(long n, long k) {
	if (n < k) return 0.0;
	if (n == k) return 1.0 / pow(2.0, n);
	if (k == 0) return 1.0 / pow(2.0, n);
	if (CC[n][k]) return CC[n][k];
	return (CC[n][k] = (C(n - 1, k) + C(n - 1, k - 1)) / 2.0);
}

int main(int argc, char *argv[]) {
	int N, D;
	int X, Y;
	cin >> N >> D >> X >> Y;
	if (X % D != 0 || Y % D != 0) {
		printf("0.0\n");
		return 0;
	}

	X /= D;
	Y /= D;
	int dx = abs(X), dy = abs(Y);
	if (dx + dy > N) {
		printf("0.0\n");
		return 0;
	}

	int rest = N - (dx + dy);
	if (rest % 2 != 0) {
		printf("0.0\n");
		return 0;
	}

	double ans = 0.0;
	for (int lr = dx; lr <= N - dy; lr += 2) {
		int ud = N - lr;
		int x = (lr + dx) / 2;
		int y = (ud + dy) / 2;
		double pa = C(N, lr);
		double pb = C(lr, x);
		double pc = C(ud, y);
		ans += pa * pb * pc;
	}

	cout << fixed << setprecision(20) << ans << endl;

	return 0;
}