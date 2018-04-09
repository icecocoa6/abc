#include <iostream>

using namespace std;

const int MOD = 1000000007;

typedef pair<int, int> edge;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	string S1, S2;
	cin >> S1 >> S2;


	long long ans = 1;
	int idx = 0;
	bool vert = false;

	if (S1[idx] == S2[idx]) {
		ans = 3;
		vert = true;
		idx += 1;
	} else {
		ans = 6;
		idx += 2;
	}

	while (idx < N) {
		if (S1[idx] == S2[idx]) {
			if (vert) {
				ans *= 2;
			} else {
				ans *= 1;
			}
			idx += 1;
			vert = true;
		} else {
			if (vert) {
				ans *= 2;
			} else {
				ans *= 3;
			}
			idx += 2;
			vert = false;
		}

		ans %= MOD;
	}

	cout << ans << endl;

	return 0;
}
