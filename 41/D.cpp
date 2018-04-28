#include <iostream>
#include <vector>

using namespace std;

bool path[16][16];

bool reachto(int v, int set) {
	for (int i = 0; i < 16; i++) {
		if ((set & (1 << i)) && path[v][i]) return true;
	}

	return false;
}

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		path[x-1][y-1] = true;
	}

	long dp[1 << N];
	dp[0] = 1;
	for (int i = 1; i < (1 << N); i++) {
		dp[i] = 0;
		for (int j = 0; j < N; j++) {
			int mask = 1 << j;
			int v = i & mask;
			if (v && !reachto(j, i & ~mask)) dp[i] += dp[i & ~mask];
		}
	}

	cout << dp[(1 << N) - 1] << endl;

	return 0;
}