#include <vector>
#include <iostream>

using namespace std;

vector<int> a;
bool visited[100000];

int dfs(int v, int d) {
	if (visited[v]) return -1;
	if (v == 1) return d;
	visited[v] = true;
	return dfs(a[v], d + 1);
}

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	a = vector<int>(N);
	for (int i = 0; i < N; i++) {
		int ai;
		cin >> ai;
		a[i] = ai - 1;
	}


	int ans = dfs(0, 0);
	cout << ans << endl;

	return 0;
}