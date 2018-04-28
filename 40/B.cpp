#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin >> n;

	int ans = n;
	for (int w = 1; w < sqrt(n) + 1; w++) {
		int h = n / w;
		int r = n % w;
		ans = min(ans, abs(h - w) + r);
	}

	cout << ans << endl;

	return 0;
}