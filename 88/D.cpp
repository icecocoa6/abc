#include <iostream>
#include <queue>

using namespace std;

typedef pair<int, int> point;
char board[50][50];

int main(int argc, char *argv[]) {
	int H, W;
	cin >> H >> W;

	int white = 0;
	for (int y = 0; y < H; y++) {
		string s;
		cin >> s;
		for (int x = 0; x < W; x++) {
			board[x][y] = s[x];
			if (board[x][y] == '.') white++;
		}
	}

	queue<point> open;
	open.push(point(0, 0));
	board[0][0] = 0;
	while (!open.empty()) {
		point p = open.front(); open.pop();
		int x = p.first, y = p.second;
		int s = board[x][y];

		if (x == W - 1 && y == H - 1) {
			break;
		}

		if (x + 1 < W && board[x + 1][y] == '.') {
			board[x + 1][y] = s + 1;
			open.push(point(x + 1, y));
		}
		if (0 <= x - 1 && board[x - 1][y] == '.') {
			board[x - 1][y] = s + 1;
			open.push(point(x - 1, y));
		}
		if (y + 1 < H && board[x][y + 1] == '.') {
			board[x][y + 1] = s + 1;
			open.push(point(x, y + 1));
		}
		if (0 <= y - 1 && board[x][y - 1] == '.') {
			board[x][y - 1] = s + 1;
			open.push(point(x, y - 1));
		}
	}

	if (board[W - 1][H - 1] == '.') {
		cout << "-1" << endl;
	} else {
		cout << white - board[W - 1][H - 1] - 1 << endl;
	}

	return 0;
}