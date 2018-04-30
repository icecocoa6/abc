#include <iostream>
#include <vector>

using namespace std;

static const long MOD = 1000000007;

long dpf[100000];
long dpg[100000];

long f(int v, int parent, vector<vector<int>> &br);
long g(int v, int parent, vector<vector<int>> &br);

long g(int v, int parent, vector<vector<int>> &br) {
	if (dpg[v] != MOD) return dpg[v];

	long result = 1;
	for (auto t : br[v]) {
		if (t == parent) continue;
		result = (result * f(t, v, br)) % MOD;
	}

	return dpg[v] = result;
}

long f(int v, int parent, vector<vector<int>> &br) {
	if (dpf[v] != MOD) return dpf[v];

	long result = 1;
	for (auto to : br[v]) {
		if (to == parent) continue;
		result = (result * g(to, v, br)) % MOD;
	}
	result = (result + g(v, parent, br)) % MOD;

	return dpf[v] = result;
}

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<vector<int>> bridge(N);
	for (int i = 0; i < N - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		bridge[a].push_back(b);
		bridge[b].push_back(a);
	}

	for (int i = 0; i < N; i++) dpf[i] = dpg[i] = MOD;

	cout << f(0, -1, bridge) << endl;

	return 0;
}