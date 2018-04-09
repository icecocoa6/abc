#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int color[9] = {};

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		color[min(8, a / 400)]++;
	}

	int n = 0;
	for (int i = 0; i < 8; i++)
		if (color[i] > 0)
			n++;

	if (n == 0 && color[8] > 0) {
		n++;
		color[8]--;
	}

	cout << min(8, n) << " " << n + color[8] << endl;
	return 0;
}