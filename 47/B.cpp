#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int W, H, N;
	cin >> W >> H >> N;

	bool board[101][101] = {};
	for (int i = 0; i < N; i++) {
		int xi, yi, a;
		cin >> xi >> yi >> a;
		if (a == 1) {
			for (int x = 0; x < xi; x++)
				for (int y = 0; y < H; y++)
					board[x][y] = true;
		} else if (a == 2) {
			for (int x = xi; x < W; x++)
				for (int y = 0; y < H; y++)
					board[x][y] = true;
		} else if (a == 3) {
			for (int y = 0; y < yi; y++)
				for (int x = 0; x < W; x++)
					board[x][y] = true;
		} else if (a == 4) {
			for (int y = yi; y < H; y++)
				for (int x = 0; x < W; x++)
					board[x][y] = true;
		}
	}

	int ans = 0;
	for (int x = 0; x < W; x++)
		for (int y = 0; y < H; y++)
			ans += !board[x][y];

	cout << ans << endl;
}