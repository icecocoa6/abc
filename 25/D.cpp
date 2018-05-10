#include <iostream>
#include <vector>

using namespace std;

static const long MOD = 1000000007;

vector<int> dp(1 << 25);

void f(int i, int j) {
	if (i & (1 << j)) return;
	if ((j % 5) > 0 && (j % 5) < 4 && ((i >> (j - 1)) ^ (i >> (j + 1))) & 1) return;
	if ((j / 5) > 0 && (j / 5) < 4 && ((i >> (j - 5)) ^ (i >> (j + 5))) & 1) return;
	dp[i | (1 << j)] = (dp[i | (1 << j)] + dp[i]) % MOD;
}

int main(int argc, char *argv[]) {
	vector<int> p(25, -1);
	vector<int> v;
	for (int i = 0; i < 25; i++) {
		int x;
		cin >> x;
		if (x > 0) {
			p[x - 1] = i;
		} else {
			v.push_back(i);
		}
	}

	dp[0] = 1;
	for (int i = 0; i < (1 << 25); i++) {
		if (dp[i] == 0) continue;
		int n = 0;
		for (int k = 0; k < 25; k++)
			if (i & (1 << k))
				n++;

		if (p[n] != -1) {
			f(i, p[n]);
		} else {
			for (auto j : v) {
				f(i, j);
			}
		}
	}

	cout << dp[(1 << 25) - 1] << endl;

	return 0;
}
