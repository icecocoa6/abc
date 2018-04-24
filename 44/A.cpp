#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N, K, X, Y;
	cin >> N >> K >> X >> Y;
	int ans = 0;
	if (N > K) ans = K * X + (N - K) * Y;
	else ans = N * X;
	cout << ans << endl;
	return 0;
}