#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	int K;
	cin >> N >> K;
	bool D[10] = {};
	for (int i = 0; i < K; i++) {
		int Di;
		cin >> Di;
		D[Di] = true;
	}

	for (int i = N; i < 100000; i++) {
		int n = i;
		bool flag = false;
		while (n > 0) {
			if (D[n % 10]) {
				flag = true;
				break;
			}
			n /= 10;
		}
		if (!flag) {
			cout << i << endl;
			return 0;
		}
	}

	for (int i = 1; i <= 9; i++) {
		if (D[i]) continue;
		cout << i * 100000 << endl;
		break;
	}

	return 0;
}