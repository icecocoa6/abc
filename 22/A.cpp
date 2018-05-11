#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N, S, T, W = 0;
	cin >> N >> S >> T;

	int ans = 0;
	for (int i = 0; i < N; i++) {
		int A;
		cin >> A;
		W += A;
		if (S <= W && W <= T) ans++;
	}

	cout << ans << endl;
	return 0;
}