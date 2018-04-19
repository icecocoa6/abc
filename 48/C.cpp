#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char *argv[]) {
	int N, x;
	cin >> N >> x;

	long ans = 0;
	vector<long> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
		if (a[i] > x) {
			ans += a[i] - x;
			a[i] = x;
		}
	}

	for (int i = 1; i < N; i++) {
		if (a[i-1] + a[i] > x) {
			ans += (a[i-1] + a[i]) - x;
			a[i] -= (a[i-1] + a[i]) - x;
		}
	}

	cout << ans << endl;

	return 0;
}