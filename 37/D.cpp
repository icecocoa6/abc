#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using point_t = pair<int, int>;
static const long MOD = 1000000007;

int main(int argc, char *argv[]) {
	int H, W;
	cin >> H >> W;

	vector<vector<int>> board(W, vector<int>(H));
	vector<vector<long>> dp(W, vector<long>(H, 1));
	vector<pair<int, point_t>> cell;

	for (int y = 0; y < H; y++) {
		for (int x = 0; x < W; x++) {
			int a;
			cin >> board[x][y];
			cell.push_back(make_pair(board[x][y], point_t(x, y)));
		}
	}
	
	sort(begin(cell), end(cell), greater<pair<int, point_t>>());
	for (auto c : cell) {
		auto x = c.second.first, y = c.second.second;
		if (x > 0 && board[x][y] < board[x-1][y])
			dp[x][y] += dp[x-1][y];
		if (x < W - 1 && board[x][y] < board[x+1][y])
			dp[x][y] += dp[x+1][y];
		if (y > 0 && board[x][y] < board[x][y-1])
			dp[x][y] += dp[x][y-1];
		if (y < H - 1 && board[x][y] < board[x][y+1])
			dp[x][y] += dp[x][y+1];
		dp[x][y] %= MOD;
	}

	long ans = 0;
	for (int x = 0; x < W; x++)
		for (int y = 0; y < H; y++)
			ans = (ans + dp[x][y]) % MOD;

	cout << ans << endl;

	return 0;
}