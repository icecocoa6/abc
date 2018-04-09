#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	long N, K;

	cin >> N >> K;

	long cnt = 0;
	for (long b = 1; b <= N; b++) {
		if (b - K > 0) cnt += (N / b) * (b - K);
		if (N % b >= K) {
			cnt += N % b - K + 1;
		}
		if (K == 0) cnt -= 1;
	}

	cout << cnt << endl;

	return 0;
}