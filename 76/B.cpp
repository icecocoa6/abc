#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int N, K;
	cin >> N >> K;

	int ans = 1;
	for (int i = 0; i < N; i++) {
		if (ans < K) ans *= 2;
		else ans += K;
	}

	cout << ans << endl;

	return 0;
}