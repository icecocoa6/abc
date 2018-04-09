#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int path[201][201];

int dfs(int d, int p, vector<int> &r) {
	int result = numeric_limits<int>::max();
	bool flag = false;
	for (int i = 0; i < r.size(); i++) {
		if (r[i] == 0) continue;
		int n = r[i];
		r[i] = 0;
		result = min(result, dfs(d + path[p][n], n, r));
		r[i] = n;
		flag = true;
	}
	if (!flag) return d;
	return result;
}

int main(int argc, char *argv[]) {
	int N, M, R;
	cin >> N >> M >> R;

	vector<int> r;
	for (int i = 0; i < R; i++) {
		int ri;
		cin >> ri;
		r.push_back(ri);
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (i != j) path[i][j] = 1e9 + 1;
		}
	}

	for (int i = 0; i < M; i++) {
		int A, B, C;
		cin >> A >> B >> C;
		path[A][B] = path[B][A] = C;
	}

	for (int k = 1; k <= N; k++) {
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				if (path[i][j] > path[i][k] + path[k][j]) {
					path[i][j] = path[i][k] + path[k][j];
				}
			}
		}
	}

	int ans = dfs(0, 0, r);

	cout << ans << endl;
}