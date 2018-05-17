#include <iostream>
#include <vector>

using namespace std;

static const int INF = 1000000000;

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;

	vector<vector<int>> d(N, vector<int>(N, INF));
	for (int i = 0; i < N; i++) d[i][i] = 0;

	for (int i = 0; i < M; i++) {
		int a, b, t;
		cin >> a >> b >> t;
		a--, b--;
		d[a][b] = d[b][a] = t;
	}

	for (int k = 0; k < N; k++)
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

	int ans = INF;
	for (int i = 0; i < N; i++) {
		int m = 0;
		for (int j = 0; j < N; j++) {
			if (i != j) m = max(m, d[i][j]);
		}
		ans = min(ans, m);
	}

	cout << ans << endl;

	return 0;
}