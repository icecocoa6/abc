#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<vector<int>> D(N + 1, vector<int>(N + 1));
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			cin >> D[i][j];

	int Q;
	cin >> Q;
	vector<int> P(Q);
	for (int i = 0; i < Q; i++)
		cin >> P[i];

	for (int i = 0; i <= N; i++)
		for (int j = 1; j <= N; j++)
			D[i][j] += D[i][j - 1];

	for (int i = 1; i <= N; i++)
		for (int j = 0; j <= N; j++)
			D[i][j] += D[i - 1][j];

	vector<int> de(N * N);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			for (int k = i; k <= N; k++) {
				for (int l = j; l <= N; l++) {
					int a = (k - i + 1) * (l - j + 1);
					int d = D[k][l] - D[k][j - 1] - D[i - 1][l] + D[i - 1][j - 1];
					de[a] = max(de[a], d);
				}
			}
		}
	}

	for (auto p : P) {
		int ans = 0;
		for (int i = 1; i <= p; i++)
			ans = max(ans, de[i]);
		cout << ans << endl;
	}

	return 0;
}