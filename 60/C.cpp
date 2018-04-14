#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	long T;
	cin >> N >> T;

	long ans = 0;
	long t = 0;
	for (int i = 0; i < N; i++) {
		long ti;
		cin >> ti;
		if (t > ti) ans -= t - ti;
		ans += T;
		t = ti + T;
	}

	cout << ans << endl;
	return 0;
}
