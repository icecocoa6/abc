#include <iostream>

using namespace std;

int order[2001][2001];

int sum_square(int x1, int y1, int x2, int y2) {
	return order[x2][y2] - order[x2][y1] - order[x1][y2] + order[x1][y1];
}

int main(int argc, char *argv[]) {
	int N, K;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		int x, y;
		char c;
		cin >> x >> y;
		cin >> c;
		if (c == 'W') {
			x += K;
		}
		order[x % (2 * K) + 1][y % (2 * K) + 1] += 1;
	}

	for (int x = 1; x <= 2 * K; x++) {
		for (int y = 1; y <= 2 * K; y++) {
			order[x][y] += order[x - 1][y] + order[x][y - 1] - order[x - 1][y - 1];
		}
	}

	int ans = 0;
	for (int x = 1; x <= K; x++) {
		for (int y = 1; y <= K; y++) {
			int cnt = 0;
			cnt += sum_square(0, 0, x, y);
			cnt += sum_square(x, y, x + K, y + K);
			cnt += sum_square(x + K, y + K, 2 * K, 2 * K);
			cnt += sum_square(x + K, 0, 2 * K, y);
			cnt += sum_square(0, y + K, x, 2 * K);
			cnt = max(N - cnt, cnt);
			ans = max(ans, cnt);
		}
	}

	cout << ans << endl;
	return 0;
}