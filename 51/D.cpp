#include <iostream>
#include <vector>

using namespace std;

static const int INF = 100000000;

int d[101][101];

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;

	vector<vector<pair<int, int>>> es(N+1);
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			d[i][j] = (i == j) ? 0 : INF;

	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		d[a][b] = d[b][a] = c;
		es[a].push_back(make_pair(b, c));
	}

	for (int k = 1; k <= N; k++)
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				if (d[i][j] > d[i][k] + d[k][j])
					d[i][j] = d[i][k] + d[k][j];

	int ans = 0;
	for (int k = 1; k <= N; k++) {
		for (auto e : es[k]) {
			int l = e.first;
			int c = e.second;
			bool used = false;
			for (int i = 1; i <= N; i++) {
				for (int j = 1; j <= N; j++) {
					if (d[i][j] == d[i][k] + c + d[l][j]) used = true;
				}
			}
			if (!used) ans++;
		}
	}

	cout << ans << endl;
	return 0;
}