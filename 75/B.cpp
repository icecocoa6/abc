#include <iostream>
#include <vector>
#include <string>

using namespace std;

int board[52][52];

int main(int argc, char *argv[]) {
	int H, W;
	cin >> H >> W;

	vector<string> S(H);

	for (int i = 1; i <= H; i++) {
		string S;
		cin >> S;
		for (int j = 1; j <= W; j++) {
			if (S[j-1] == '#') {
				board[i - 1][j - 1] ++;
				board[i][j - 1] ++;
				board[i + 1][j - 1] ++;
				board[i - 1][j] ++;
				board[i][j] += 9;
				board[i + 1][j] ++;
				board[i - 1][j + 1] ++;
				board[i][j + 1] ++;
				board[i + 1][j + 1] ++;
			}
		}
	}

	for (int y = 1; y <= H; y++) {
		for (int x = 1; x <= W; x++) {
			if (board[y][x] >= 9) cout << "#";
			else cout << board[y][x];
		}
		cout << endl;
	}

	return 0;
}