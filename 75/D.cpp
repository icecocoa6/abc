#include <iostream>
#include <limits>

using namespace std;

int N, K;
int x[50], y[50];

int count(int x1, int y1, int x2, int y2) {
	int result = 0;
	for (int i = 0; i < N; i++) {
		if (x1 <= x[i] && x[i] <= x2 && y1 <= y[i] && y[i] <= y2) result++;
	}
	return result;
}

int main(int argc, char *argv[]) {
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
	}

	long long x1, x2, y1, y2;
	long long ans = numeric_limits<long long>::max();
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			x1 = min(x[i], x[j]);
			x2 = max(x[i], x[j]);
			for (int k = 0; k < N; k++) {
				for (int l = k + 1; l < N; l++) {
					y1 = min(y[k], y[l]);
					y2 = max(y[k], y[l]);

					if (K <= count(x1, y1, x2, y2)) {
						ans = min(ans, (x2 - x1) * (y2 - y1));
					}
				}
			}
		}
	}

	cout << ans << endl;

	return 0;
}