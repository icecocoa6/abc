#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N, D, K;
	cin >> N >> D >> K;
	vector<int> L(D), R(D);
	for (int i = 0; i < D; i++) cin >> L[i] >> R[i];
	vector<int> S(K), T(K);
	for (int i = 0; i < K; i++) cin >> S[i] >> T[i];

	for (int i = 0; i < K; i++) {
		int l, r;
		l = r = S[i];

		for (int j = 0; j < D; j++) {
			if (L[j] <= r && l <= R[j]) {
				l = min(l, L[j]);
				r = max(r, R[j]);

				if (l <= T[i] && T[i] <= r) {
					cout << j + 1 << endl;
					break;
				}
			}
		}
	}

	return 0;
}