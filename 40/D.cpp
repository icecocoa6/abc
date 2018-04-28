#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

int find(vector<int> &parent, int v) {
	if (parent[v] == v) return v;
	parent[v] = find(parent, parent[v]);
	return parent[v];
}

void unite(vector<int> &parent, vector<int> &size, int u, int v) {
	int up = find(parent, u);
	int vp = find(parent, v);
	if (up != vp) {
		parent[vp] = up;
		size[up] += size[vp];
		size[vp] = 0;
	}
}

int main(int argc, char *argv[]) {
	int N, M, Q;
	cin >> N >> M;

	// edge  : 0 = year, 1 = 1, 2 = city No., 3 = city No.
	// query : 0 = year, 1 = 2, 2 = query No., 3 = city No.
	vector<tuple<int, int, int, int>> edge_query;

	for (int i = 0; i < M; i++) {
		int a, b, y;
		cin >> a >> b >> y;
		edge_query.push_back(make_tuple(y, 1, a, b));
	}

	cin >> Q;
	for (int i = 0; i < Q; i++) {
		int v, w;
		cin >> v >> w;
		edge_query.push_back(make_tuple(w, 2, i, v));
	}

	sort(begin(edge_query), end(edge_query), greater<tuple<int, int, int, int>>());

	vector<int> city(N+1);
	vector<int> size(N+1, 1);
	vector<int> ans(Q);

	for (int i = 0; i < city.size(); i++) city[i] = i;

	for (auto t : edge_query) {
		int a = get<2>(t), b = get<3>(t);
		if (get<1>(t) == 2) { // query
			ans[a] = size[find(city, b)];
		} else {
			unite(city, size, a, b);
		}
	}

	for (auto a : ans) cout << a << endl;

	return 0;
}