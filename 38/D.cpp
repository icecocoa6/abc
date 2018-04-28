#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int query(vector<int> &bit, int i) {
	int ret = 0;
	for (int x = i; x > 0; x -= x & -x) ret = max(ret, bit[x]);
	return ret;
}

void add(vector<int> &bit, int i, int v) {
	for (int x = i; x <= bit.size(); x  += x & -x) bit[x] = max(bit[x], v);
}

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<pair<int, int>> box(N+1);

	for (int i = 1; i <= N; i++) {
		int w, h;
		cin >> w >> h;
		box[i] = make_pair(w, -h);
	}

	sort(begin(box), end(box));

	int ans = 0;
	vector<int> dp(N+1);
	vector<int> bit(100001);
	for (int i = 1; i <= N; i++) {
		dp[i] = query(bit, -box[i].second - 1) + 1;
		add(bit, -box[i].second, dp[i]);
		ans = max(ans, dp[i]);
	}


	cout << ans << endl;

	return 0;
}