#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char *argv[]) {
	int N, A;
	cin >> N >> A;
	vector<int> x(N+1);

	for (int i = 1; i <= N; i++) cin >> x[i];

	long dp[51][51][2501] = {};

	for (int j = 0; j <= N; j++)
		dp[j][0][0] = 1;

	for (int s = 0; s <= N * 50; s++) {
		for (int k = 1; k <= N; k++) {
			for (int j = 1; j <= N; j++) {
				if (x[j] > s)
					dp[j][k][s] = dp[j-1][k][s];
				else
					dp[j][k][s] = dp[j-1][k][s] + dp[j-1][k-1][s-x[j]];
			}
		}
	}

	long ans = 0;
	for (int k = 1; k <= N; k++)
		ans += dp[N][k][k * A];

	cout << ans << endl;

	return 0;
}