#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<int> a(N);
	for (int i = 0; i < N; i++) cin >> a[i];

	int Amax = -100000;
	for (int i = 0; i < N; i++) {
		int A_ = -100000;
		int Bmax = -100000;

		for (int j = 0; j < N; j++) {
			if (i == j) continue;

			int A = 0, B = 0;
			for (int k = min(i, j); k <= max(i, j); k++) {
				if ((k - min(i, j)) % 2 == 0) A += a[k];
				else B += a[k];
			}

			if (Bmax < B) {
				A_ = A;
				Bmax = B;
			}
		}

		Amax = max(Amax, A_);
	}

	cout << Amax << endl;

	return 0;
}