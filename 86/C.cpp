#include <iostream>

using namespace std;

#define ABS(x) ((x) > 0 ? (x) : -(x))

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	int ct = 0, cx = 0, cy = 0;
	for (int i = 0; i < N; i++) {
		int t, x, y;
		cin >> t >> x >> y;

		int d = ABS(cx - x) + ABS(cy - y);
		if ((t - d) < 0 || (t - d) % 2 != 0) {
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
	return 0;
}