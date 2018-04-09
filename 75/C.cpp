#include <iostream>

using namespace std;

int N, M;
int a[50], b[50];
int adjacent[51][51];
bool visited[51];

void dfs(int v) {
	visited[v] = true;
	for (int i = 1; i <= N; i++) {
		if (adjacent[v][i] && !visited[i]) {
			dfs(i);
		}
	}
}

int main(int argc, char *argv[]) {
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int ai, bi;
		cin >> ai >> bi;
		adjacent[ai][bi] = adjacent[bi][ai] = 1;
		a[i] = ai; b[i] = bi;
	}

	int ans = 0;
	for (int i = 0; i < M; i++) {
		for (int j = 1; j <= N; j++) visited[j] = false;

		adjacent[a[i]][b[i]] = adjacent[b[i]][a[i]] = false;
		dfs(a[i]);
		if (!visited[b[i]]) ans++;
		adjacent[a[i]][b[i]] = adjacent[b[i]][a[i]] = true;
	}

	cout << ans << endl;

	return 0;
}