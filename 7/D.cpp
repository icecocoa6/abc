#include <iostream>
#include <vector>

using namespace std;

long f(string N) {
	vector<vector<long>> dp(N.size(), vector<long>(2));
	for (int i = '0'; i <= N[0]; i++) {
		if (i == '4' || i == '9') continue;
		if (i != N[0])
			dp[0][1] += 1;
		else
			dp[0][0] += 1;
	}

	for (int i = 1; i < N.size(); i++) {
		dp[i][1] = 8 * dp[i - 1][1];
		for (int j = '0'; j < N[i]; j++) {
			if (j == '4' || j == '9') continue;
			dp[i][1] += dp[i - 1][0];
		}
		if (N[i] != '4' && N[i] != '9')
			dp[i][0] = dp[i - 1][0];
	}
	return stol(N) - (dp[N.size() - 1][1] + dp[N.size() - 1][0]);
}

int main(int argc, char *argv[]) {
	long A, B;
	cin >> A >> B;

	cout << f(to_string(B)) - f(to_string(A - 1)) << endl;

	return 0;
}