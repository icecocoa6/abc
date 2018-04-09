#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N, D, X;
	int A[100];

	cin >> N >> D >> X;
	for (int i = 0; i < N; i++)
		cin >> A[i];

	int ans = X;
	for (int i = 1; i <= D; i++) {
		for (int j = 0; j < N; j++) {
			if ((i - 1) % A[j] == 0) {
				ans++;
			}
		}
	}

	cout << ans << endl;
	return 0;
}