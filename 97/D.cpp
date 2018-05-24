#include <iostream>
#include <vector>

using namespace std;

int parent[100001];

int root(int v) {
	if (parent[v] == v) return v;
	return (parent[v] = root(parent[v]));
}

void unite(int u, int v) {
	int ru = root(u), rv = root(v);
	if (ru != rv) parent[ru] = rv;
}

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
		parent[i] = i;

	vector<int> p(N);
	for (int i = 0; i < N; i++) {
		cin >> p[i];
		p[i]--;
	}

	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		unite(x, y);
	}

	int ans = 0;
	for (int i = 0; i < N; i++)
		if (root(i) == root(p[i]))
			ans++;

	cout << ans << endl;

	return 0;
}