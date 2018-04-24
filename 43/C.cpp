#include <vector>
#include <limits>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; i++) cin >> a[i];

	long ans = numeric_limits<long>::max();
	for (int i = -100; i <= 100; i++) {
		long cost = 0;
		for (auto ai : a) {
			cost += (ai - i) * (ai - i);
		}

		ans = min(ans, cost);
	}

	cout << ans << endl;
	return 0;
}