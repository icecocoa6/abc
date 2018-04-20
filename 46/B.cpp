#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N, K;
	cin >> N >> K;
	int ans = K;
	for (int i = 1; i < N; i++) ans *= K - 1;
	cout << ans << endl;
	return 0;
}