#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	int tp = 0, xp = 0, yp = 0;
	int t, x, y;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> t >> x >> y;
		int d = x - xp + y - yp;
		int rest = (t - tp) - d;
		if (!(rest >= 0 && rest % 2 == 0)) {
			cout << "No" << endl;
			return 0;
		}
		tp = t;
		xp = x;
		yp = y;
	}

	cout << "Yes" << endl;

	return 0;
}