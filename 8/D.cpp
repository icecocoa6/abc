#include <iostream>
#include <vector>
#include <map>
#include <tuple>

using namespace std;

using point = pair<int, int>;
using square = tuple<int, int, int, int>;

int solve(int i, int j, int k, int l, vector<point> &M, map<square, int> &memo) {
	square key(i, j, k, l);
	if (memo[key] > 0) return memo[key];
	int result = 0;

	for (auto m : M) {
		if (m.first < i || k < m.first) continue;
		if (m.second < j || l < m.second) continue;

		int r = k - i + l - j + 1;
		r += solve(i, j, m.first - 1, m.second - 1, M, memo);
		r += solve(i, m.second + 1, m.first - 1, l, M, memo);
		r += solve(m.first + 1, j, k, m.second - 1, M, memo);
		r += solve(m.first + 1, m.second + 1, k, l, M, memo);
		result = max(result, r);
	}

	return memo[key] = result;
}

int main(int argc, char *argv[]) {
	int W, H;
	cin >> W >> H;
	int N;
	cin >> N;
	vector<pair<int, int>> M(N);
	for (int i = 0; i < N; i++) cin >> M[i].first >> M[i].second;

	map<square, int> memo;
	cout << solve(1, 1, W, H, M, memo) << endl;

	return 0;
}