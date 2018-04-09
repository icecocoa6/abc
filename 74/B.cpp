#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N, K;
	cin >> N >> K;

	int ans = 0;	
	for (int i = 0; i < N; i++) {
		int xi;
		cin >> xi;

		ans += min(xi, K - xi);
	}

	cout << 2 * ans << endl;

	return 0;
}