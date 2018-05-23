#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
	int N, K;
	cin >> N >> K;

	vector<int> R(N);
	for (int i = 0; i < N; i++) cin >> R[i];

	sort(begin(R), end(R));

	double ans = 0;
	for (int i = N - K; i < N; i++) {
		ans = (ans + R[i]) / 2;
	}

	cout << fixed << setprecision(10) << ans << endl;

	return 0;
}