#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int W, N, K;
	cin >> W >> N >> K;

	vector<int> A(N+1);
	vector<int> B(N+1);
	for (int i = 1; i <= N; i++)
		cin >> A[i] >> B[i];

	auto dp = vector<vector<vector<int>>>(N+1, vector<vector<int>>(K+1, vector<int>(W+1)));
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= K; j++) {
			for (int k = 1; k <= W; k++) {
				if (k >= A[i])
					dp[i][j][k] = max(dp[i - 1][j][k], dp[i - 1][j - 1][k - A[i]] + B[i]);
				else
					dp[i][j][k] = dp[i - 1][j][k];
			}
		}
	}

	cout << dp[N][K][W] << endl;

	return 0;
}