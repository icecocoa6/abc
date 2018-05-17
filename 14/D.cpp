#include <iostream>
#include <vector>

using namespace std;

void dfs(int lvl, int p, int u, vector<vector<int>> &es, vector<int> &par, vector<int> &d) {
	par[u] = p;
	d[u] = lvl;
	for (auto v : es[u]) {
		if (v == p) continue;
		dfs(lvl + 1, u, v, es, par, d);
	}
}

int LCA(int a, int b, vector<int> &d, vector<vector<int>> &doubled_par) {
	if (d[a] > d[b]) {
		swap(a, b);
	}

	if (d[a] < d[b]) {
		for (int k = 16; k >= 0; k--) {
			if ((1 << k) > d[b] - d[a]) continue;
			b = doubled_par[k][b];
		}
	}

	// assert (d[a] == d[b])
	for (int k = 16; k >= 0; k--) {
		if (doubled_par[k][a] == doubled_par[k][b]) continue;
		a = doubled_par[k][a];
		b = doubled_par[k][b];
	}
	// assert (doubled_par[0][a] == doubled_par[0][b])
	return (a == b) ? a : doubled_par[0][a]; // == doubled_par[0][b]
}

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	vector<vector<int>> es(N);
	for (int i = 0; i < N - 1; i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		es[x].push_back(y);
		es[y].push_back(x);
	}

	int Q;
	cin >> Q;
	vector<int> a(Q), b(Q);
	for (int i = 0; i < Q; i++) {
		int ai, bi;
		cin >> ai >> bi;
		ai--, bi--;
		a[i] = ai;
		b[i] = bi;
	}

	vector<int> par(N), d(N);
	dfs(0, 0, 0, es, par, d);

	vector<vector<int>> doubled_par(17, vector<int>(N));
	for (int k = 0; k < 17; k++) {
		for (int i = 0; i < N; i++) {
			if (k == 0)
				doubled_par[k][i] = par[i];
			else
				doubled_par[k][i] = doubled_par[k - 1][doubled_par[k - 1][i]];
		}
	}

	for (int i = 0; i < Q; i++) {
		int lca = LCA(a[i], b[i], d, doubled_par);
		cout << d[a[i]] + d[b[i]] - 2 * d[lca] + 1 << endl;
	}

	return 0;
}