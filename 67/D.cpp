#include <iostream>
#include <vector>

using namespace std;

int N;
vector<vector<int>> es;
bool visited[100001];
int df[100001];
int ds[100001];

int dfs1(int v, int d) {
	int result = 0;
	visited[v] = true;
	df[v] = d;
	for (auto &u : es[v]) {
		if (visited[u]) continue;
		dfs1(u, d + 1);
	}
	return result;
}

int dfs2(int v, int d) {
	int result = 0;
	visited[v] = true;
	ds[v] = d;
	for (auto &u : es[v]) {
		if (visited[u]) continue;
		dfs2(u, d + 1);
	}
	return result;
}

int main(int argc, char *argv[]) {
	cin >> N;

	es = vector<vector<int>>(N+1);
	for (int i = 0; i < N - 1; i++) {
		int a, b;
		cin >> a >> b;
		es[a].push_back(b);
		es[b].push_back(a);
	}

	dfs1(1, 0);
	for (int i = 1; i <= N; i++) visited[i] = false;
	dfs2(N, 0);

	int b = 0;
	for (int i = 1; i <= N; i++) {
		if (df[i] <= ds[i]) b++;
	}
	int w = N - b;

	if (b > w) printf("Fennec\n");
	else printf("Snuke\n");

	return 0;
}