#include <iostream>
#include <vector>

using namespace std;

static const long MOD = 1000000007;

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;
	vector<int> f(N+1);
	for (int i = 1; i <= N; i++) cin >> f[i];

	vector<long> dp(N+1);
	vector<int> drug(M+1);
	dp[0] = 1;

	int l = 0, r = 1;
	long s = dp[l];
	for (int i = 1; i <= N; i++) {
		while (drug[f[i]] > 0) {
			s = (s - dp[l] + MOD) % MOD;
			l++;
			drug[f[l]] -= 1;
		}
		
		dp[i] = s;
		s = (s + dp[i]) % MOD;
		drug[f[i]] += 1;
	}

	cout << dp[N] << endl;

	return 0;
}