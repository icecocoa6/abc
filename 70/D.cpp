#include <iostream>
#include <vector>

using namespace std;

long long d[100001];
bool visited[100001];
vector<vector<pair<int, int>>> es(100001);

void dfs(int v) {
	visited[v] = true;
	for (auto &p : es[v]) {
		if (visited[p.first]) continue;
		d[p.first] = d[v] + p.second;
		dfs(p.first);
	}
}


int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	for (int i = 0; i < N - 1; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		es[a].push_back(make_pair(b, c));
		es[b].push_back(make_pair(a, c));
	}

	int Q, K;
	cin >> Q >> K;

	dfs(K);

	for (int i = 0; i < Q; i++) {
		int x, y;
		cin >> x >> y;
		cout << d[x] + d[y] << endl;
	}

	return 0;
}