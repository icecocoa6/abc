#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	int ans = 100;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int T;
		cin >> T;
		ans = min(ans, T);
	}

	cout << ans << endl;
	return 0;
}