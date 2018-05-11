#include <iostream>
#include <vector>

using namespace std;

static const int INF = 1000000000;


int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;

	vector<vector<int>> d(N, vector<int>(N, INF));
	for (int i = 0; i < N; i++) d[i][i] = 0;

	vector<pair<int, int>> from_start;
	for (int i = 0; i < M; i++) {
		int u, v, l;
		cin >> u >> v >> l;
		u--; v--;
		if (u == 0) {
			from_start.push_back({v, l});
		} else {
			d[u][v] = d[v][u] = l;
		}
	}

	for (int k = 0; k < N; k++)
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				if (d[i][j] > d[i][k] + d[k][j])
					d[i][j] = d[i][k] + d[k][j];

	int ans = INF;
	for (int i = 0; i < from_start.size(); i++) {
		auto u = from_start[i];
		for (int j = i + 1; j < from_start.size(); j++) {
			auto v = from_start[j];
			ans = min(ans, u.second + d[u.first][v.first] + v.second);
		}
	}

	if (ans == INF) ans = -1;

	cout << ans << endl;

	return 0;
}