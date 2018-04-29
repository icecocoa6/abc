#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int K, N;
	cin >> N >> K;

	vector<int> a(N);
	for (int i = 0; i < N; i++) cin >> a[i];

	long ans = 0;
	long s = 0;
	for (int i = 0; i < K; i++) s += a[i];
	ans += s;

	for (int i = K; i < N; i++) {
		s += a[i] - a[i - K];
		ans += s;
	}

	cout << ans << endl;

	return 0;
}