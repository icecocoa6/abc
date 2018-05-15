#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

static const long MOD = 1000000007;


void dfs(int v, vector<int> &distance, vector<vector<int>> &road) {
	for (auto u : road[v]) {
		if (distance[u] <= distance[v] + 1) continue;
		distance[u] = distance[v] + 1;
		dfs(u, distance, road);
	}
}
 
int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	int a, b;
	cin >> a >> b;
	a--, b--;
	int M;
	cin >> M;
	vector<vector<int>> road(N);
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		road[x].push_back(y);
		road[y].push_back(x);
	}

	vector<int> distance(N, M);
	distance[a] = 0;
	dfs(a, distance, road);

	vector<pair<int, int>> c(N);
	for (int i = 0; i < N; i++) c[i] = {distance[i], i};
	sort(begin(c), end(c));

	vector<int> path_count(N);
	path_count[a] = 1;
	for (auto p : c) {
		auto d = p.first;
		auto u = p.second;
		for (auto v : road[u]) {
			if (distance[u] + 1 > distance[v]) continue;
			path_count[v] = (path_count[v] + path_count[u]) % MOD;
		}
	}

	cout << path_count[b] << endl;

	return 0;
}
