#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;
	vector<vector<int>> d(N, vector<int>(N, 100000));

	for (int i = 0; i < N; i++) d[i][i] = 0;

	for (int i = 0; i < M; i++) {
		int A, B;
		cin >> A >> B;
		A--, B--;
		d[A][B] = d[B][A] = 1;
	}

	for (int k = 0; k < N; k++)
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				if (d[i][j] > d[i][k] + d[k][j])
					d[i][j] = d[i][k] + d[k][j];

	for (int i = 0; i < N; i++) {
		int ans = 0;
		for (int j = 0; j < N; j++)
			if (d[i][j] == 2)
				ans++;

		cout << ans << endl;
	}

	return 0;
}