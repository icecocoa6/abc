#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int R, C, K;
	cin >> R >> C >> K;

	vector<string> board(R);
	for (int i = 0; i < R; i++) cin >> board[i];

	for (int r = 0; r < R; r++) {
		for (int c = 0; c < C; c++) {
			if (board[r][c] != 'x') continue;

			for (int i = -K + 1; i <= K - 1; i++) {
				for (int j = -K + 1; j <= K - 1; j++) {
					if (abs(i) + abs(j) >= K) continue;
					if (i + r < 0 || i + r >= R) continue;
					if (j + c < 0 || j + c >= C) continue;
					if (board[i + r][j + c] == 'o')
						board[i + r][j + c] = '*';
				}
			}
		}
	}

	int ans = 0;
	for (int r = K - 1; r < R - K + 1; r++) {
		for (int c = K - 1; c < C - K + 1; c++) {
			if (board[r][c] == 'o') ans++;
		}
	}

	cout << ans << endl;

	return 0;
}