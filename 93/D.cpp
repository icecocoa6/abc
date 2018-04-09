#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
	int Q;
	cin >> Q;

	for (int i = 0; i < Q; i++) {
		long long A, B;
		cin >> A >> B;

		if (A == B || A + 1 == B) {
			cout << 2 * A - 2 << endl;
		} else {
			long long C = sqrt(A * B);
			if (C * C == A * B) C--;

			if (C * (C + 1) >= A * B) cout << 2 * C - 2 << endl;
			else cout << 2 * C - 1 << endl;
		}
	}
	return 0;
}