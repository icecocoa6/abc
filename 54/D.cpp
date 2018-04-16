#include <iostream> 

using namespace std;

static const int INF = 1000000000;

int dp[41][401][401];
int a[40];
int b[40];
int c[40];
int N, Ma, Mb;

int main(int argc, char *argv[]) {
	cin >> N >> Ma >> Mb;

	for (int i = 0; i < N; i++) {
		cin >> a[i] >> b[i] >> c[i];
	}

	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= 400; j++) {
			for (int k = 0; k <= 400; k++) {
				dp[i][j][k] = INF;
			}
		}
	}
	dp[0][0][0] = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= 390; j++) {
			for (int k = 0; k <= 390; k++) {
				dp[i+1][j][k] = min(dp[i+1][j][k], dp[i][j][k]);
				dp[i+1][j+a[i]][k+b[i]] = min(dp[i+1][j+a[i]][k+b[i]], dp[i][j][k] + c[i]);
			}
		}
	}

	int ans = INF;
	for (int i = 1; i <= 390; i++) {
		for (int j = 1; j <= 390; j++) {
			if (i * Mb == j * Ma)
				ans = min(ans, dp[N][i][j]);
		}
	}

	if (ans != INF) cout << ans << endl;
	else cout << -1 << endl;

	return 0;
}