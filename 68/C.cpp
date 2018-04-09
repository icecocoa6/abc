#include <vector>
#include <iostream>

using namespace std;

bool reachable[200001];

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;

	vector<vector<int>> e(N+1);
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		e[a].push_back(b);
		e[b].push_back(a);
	}

	reachable[1] = true;
	for (auto &i : e[1]) reachable[i] = true;

	for (int i = 0; i < e.size(); i++) {
		if (!reachable[i]) continue;
		for (auto &n : e[i]) {
			if (n == N) {
				cout << "POSSIBLE" << endl;
				return 0;
			}
		}
	}

	cout << "IMPOSSIBLE" << endl;

	return 0;
}