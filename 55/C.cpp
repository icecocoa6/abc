#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	long N, M;
	cin >> N >> M;

	long ans = 0;
	if (2 * N < M) {
		ans += N;
		M -= 2 * N;
		N = 0;
	} else {
		ans += M / 2;
		M = 0;
	}

	ans += M / 4;

	cout << ans << endl;

	return 0;
}