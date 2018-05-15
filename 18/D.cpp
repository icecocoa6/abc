#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

int main(int argc, char *argv[]) {
	int N, M, P, Q, R;
	cin >> N >> M >> P >> Q >> R;

	vector<vector<int>> z(N, vector<int>(M));
	for (int i = 0; i < R; i++) {
		int x, y, si;
		cin >> x >> y >> si;
		x--; y--;
		z[x][y] = si;
	}

	int ans = 0;
	for (int n = 0; n < (1 << N); n++) {
		bitset<32> bits(n);
		if (bits.count() != P) continue;

		vector<int> happiness(M);

		for (int i = 0; i < N; i++)
			if (bits[i])
				for (int j = 0; j < M; j++)
					happiness[j] += z[i][j];

		sort(begin(happiness), end(happiness), greater<int>());

		int sum = 0;
		for (int i = 0; i < Q; i++) sum += happiness[i];

		ans = max(ans, sum);
	}

	cout << ans << endl;

	return 0;
}