#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	long N, M;
	cin >> N >> M;

	long ans = 0;

	if (N == 1 && M == 1) ans = 1;

	// top & bottom
	if (N > 2) {
		if (M == 1) {
			ans += N - 2;
		}
	}

	// left & right
	if (M > 2) {
		if (N == 1) {
			ans += M - 2;
		}
	}

	if (N > 2 && M > 2) {
		ans += (N - 2) * (M - 2);
	}

	cout << ans << endl;
}