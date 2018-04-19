#include <iostream>
#include <vector>
#include <map>

using namespace std;


void dfs(int v, vector<vector<int>> &es, vector<int> &ing) {
	for (int u : es[v]) {
		if (ing[u] != 0) continue;
		ing[u] = ing[v];
		dfs(u, es, ing);
	}
}

int main(int argc, char *argv[]) {
	int N, K, L;
	cin >> N >> K >> L;

	vector<int> area_roads(N);
	vector<int> area_rails(N);

	vector<vector<int>> roads(N);
	vector<vector<int>> rails(N);
	for (int i = 0; i < K; i++) {
		int p, q;
		cin >> p >> q;
		roads[p-1].push_back(q-1);
		roads[q-1].push_back(p-1);
	}

	for (int i = 0; i < L; i++) {
		int r, s;
		cin >> r >> s;
		rails[r-1].push_back(s-1);
		rails[s-1].push_back(r-1);
	}

	for (int i = 0; i < N; i++) {
		if (area_roads[i] != 0) continue;
		area_roads[i] = i + 1;
		dfs(i, roads, area_roads);
	}

	for (int i = 0; i < N; i++) {
		if (area_rails[i] != 0) continue;
		area_rails[i] = i + 1;
		dfs(i, rails, area_rails);
	}
	
	map<pair<int, int>, int> cnt;
	for (int i = 0; i < N; i++) {
		cnt[make_pair(area_roads[i], area_rails[i])]++;
	}

	for (int i = 0; i < N; i++) {
		cout << cnt[make_pair(area_roads[i], area_rails[i])] << " ";
	}
	cout << endl;

	return 0;
}