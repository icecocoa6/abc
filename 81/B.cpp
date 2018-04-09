#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	int ans = 1000;
	for (int i = 0; i < N; i++) {
		int Ai;
		cin >> Ai;
		int cnt = 0;
		while (Ai % 2 == 0) {
			Ai /= 2;
			cnt++;
		}
		if (cnt < ans) ans = cnt;
	}

	cout << ans << endl;
	return 0;
}
