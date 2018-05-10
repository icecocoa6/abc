#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C, K;
	int S, T;
	cin >> A >> B >> C >> K >> S >> T;
	long ans = S * A + T * B;
	if (S + T >= K) ans -= C * (S + T);
	cout << ans << endl;
	return 0;
}