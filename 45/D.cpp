#include <iostream>
#include <map>

using namespace std;

using point = pair<int, int>;

int main(int argc, char *argv[]) {
	long H, W, N;
	cin >> H >> W >> N;
	map<point, int> board;

	long ans[10] = {};
	ans[0] = (H - 2) * (W - 2);
	for (int i = 0; i < N; i++) {
		int px, py;
		cin >> py >> px;

		px--; py--;
		for (int x = px - 2; x <= px; x++) {
			if (x < 0 || x >= W - 2) continue;
			for (int y = py - 2; y <= py; y++) {
				if (y < 0 || y >= H - 2) continue;

				if (board[make_pair(x, y)] == 0) ans[0]--;
				board[make_pair(x, y)]++;
			}
		}
	}

	for (auto p : board) {
		ans[p.second]++;
	}

	for (int i = 0; i < 10; i++)
		cout << ans[i] << endl;

	return 0;
}