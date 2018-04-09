#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	int A[300][300];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> A[i][j];
		}
	}

	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (A[i][j] > A[i][k] + A[k][j]) {
					cout << -1 << endl;
					return 0;
				}
			}
		}
	}

	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (A[i][j] == 0 || A[i][k] == 0 || A[k][j] == 0) continue;
				if (A[i][j] == A[i][k] + A[k][j]) {
					A[i][j] = A[j][i] = 0;
				}
			}
		}
	}

	long long ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			ans += A[i][j];
		}
		cout << endl;
	}

	cout << ans / 2 << endl;

	return 0;
}