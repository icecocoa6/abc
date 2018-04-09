#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	vector<long> a, b;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int ai;
		cin >> ai;
		a.push_back(ai);
	}

	for (int i = 0; i < N; i++) {
		int bi;
		cin >> bi;
		b.push_back(bi);
	}

	int ans = 0;
	for (int k = 30; k >= 0; k--) {
		long T = 1 << k;
		long cnt = 0;

		sort(b.begin(), b.end());

		for (int i = 0; i < N; i++) {
			long p = a[i];
			int x = lower_bound(b.begin(), b.end(), 2 * T - p) - lower_bound(b.begin(), b.end(), T - p);
			int y = lower_bound(b.begin(), b.end(), 4 * T - p) - lower_bound(b.begin(), b.end(), 3 * T - p);
			cnt += x + y;
		}

		if (cnt & 1) ans |= T;

		for (int i = 0; i < N; i++) {
			a[i] &= ~T;
			b[i] &= ~T;
		}
	}

	cout << ans << endl;

	return 0;
}