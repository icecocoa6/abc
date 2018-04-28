#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	long ans = 0;
	long d = 1;
	int a;
	cin >> a;
	for (int i = 1; i < N; i++, d++) {
		int b;
		cin >> b;
		if (a >= b) {
			ans += d * (d + 1) / 2;
			d = 0;
		}
		a = b;
	}

	ans += d * (d + 1) / 2;
	cout << ans << endl;

	return 0;
}