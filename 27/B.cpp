#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	int sum = 0;
	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
		sum += a[i];
	}

	if (sum % N != 0) {
		printf("-1\n");
		return 0;
	}

	int average = sum / N;
	int s = 0, cnt = 0;
	int ans = 0;
	for (int i = 0; i < N; i++) {
		s += a[i];
		cnt += 1;
		if (s != average * cnt) ans++;
		else {
			s = cnt = 0;
		}
	}

	cout << ans << endl;

	return 0;
}