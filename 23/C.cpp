#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int R, C, K;
	int N;
	cin >> R >> C >> K >> N;

	vector<vector<int>> drop(R);
	vector<int> r_sum(R);
	vector<int> c_sum(C);

	for (int i = 0; i < N; i++) {
		int ri, ci;
		cin >> ri >> ci;
		ri--; ci--;
		drop[ri].push_back(ci);
		r_sum[ri]++;
		c_sum[ci]++;
	}

	vector<int> count_r(N + 1), count_c(N + 1);
	for (int i = 0; i < R; i++) count_r[r_sum[i]]++;
	for (int i = 0; i < C; i++) count_c[c_sum[i]]++;

	long ans = 0;
	for (int i = 0; i <= K; i++)
		ans += (long)count_r[i] * count_c[K - i];

	for (int i = 0; i < R; i++) {
		for (auto j : drop[i]) {
			if (r_sum[i] + c_sum[j] == K + 1) ans++;
			if (r_sum[i] + c_sum[j] == K) ans--;
		}
	}

	cout << ans << endl;
}