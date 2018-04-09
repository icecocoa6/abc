#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int H, W, N;
	cin >> H >> W >> N;

	int C[100][100] = {};
	int x = 0, y = 0;
	for (int i = 0; i < N; i++) {
		int Ai;
		cin >> Ai;


		for (int j = 0; j < Ai; j++) {
			C[x][y] = i + 1;

			if (y % 2 == 0) x++;
			else x--;
			if (x < 0) { x = 0; y++; }
			if (x >= W) { x = W - 1; y++; }
		}
	}

	for (int y = 0; y < H; y++) {
		for (int x = 0; x < W; x++) {
			cout << C[x][y] << " ";
		}
		cout << endl;
	}

	return 0;
}