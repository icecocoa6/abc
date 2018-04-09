#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int parent[100000];

int root(int v) {
	if (parent[v] == v) return v;
	else return parent[v] = root(parent[v]);
}

int same(int u, int v) {
	return root(u) == root(v);
}

void unite(int u, int v) {
	int r = root(u);
	int s = root(v);
	if (r == s) return;
	parent[r] = s;
}

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<pair<int, int>> x(N);
	vector<pair<int, int>> y(N);
	for (int i = 0; i < N; i++) {
		int X, Y;
		cin >> X >> Y;
		x[i] = make_pair(X, i);
		y[i] = make_pair(Y, i);
	}

	sort(begin(x), end(x));
	sort(begin(y), end(y));

	vector<pair<int, pair<int, int>>> es;
	for (int i = 1; i < N; i++) {
		es.push_back(make_pair(abs(x[i].first - x[i-1].first), make_pair(x[i].second, x[i-1].second)));
		es.push_back(make_pair(abs(y[i].first - y[i-1].first), make_pair(y[i].second, y[i-1].second)));
	}
	sort(begin(es), end(es));

	for (int i = 0; i < N; i++) parent[i] = i;

	int ans = 0;
	for (int i = 0; i < es.size(); i++) {
		auto e = es[i];
		auto d = e.first;
		auto u = e.second.first, v = e.second.second;
		if (!same(u, v)) {
			unite(u, v);
			ans += d;
		}
	}

	cout << ans << endl;

	return 0;
}