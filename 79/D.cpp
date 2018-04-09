#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int H, W;
	int c[10][10];
	int n[10] = {};
	cin >> H >> W;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> c[i][j];
		}
	}

	for (int x = 0; x < W; x++) {
		for (int y = 0; y < H; y++) {
			int A;
			cin >> A;
			if (A >= 0) n[A]++;
		}
	}

	for (int k = 0; k < 10; k++) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (c[i][j] > c[i][k] + c[k][j])
					c[i][j] = c[i][k] + c[k][j];
			}
		}
	}

	int ans = 0;
	for (int i = 0; i < 10; i++) {
		ans += c[i][1] * n[i];
	}

	cout << ans << endl;
}
