#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N, Y;
	cin >> N >> Y;
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= N; j++) {
			int k = N - i - j;
			if (k >= 0 && 10000 * i + 5000 * j + 1000 * k == Y) {
				cout << i << " " << j << " " << k << endl;
				return 0;
			}
		}
	}

	cout << "-1 -1 -1" << endl;
	return 0;
}