#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;

	for (int z = 0; z <= N; z++) {
		int n = N - z;
		int m = M - 4 * z;
		if (m < 0) continue;

		int x = 3 * n - m;
		int y = n - x;
		if (x < 0 || y < 0) continue;

		cout << x << " " << y << " " << z << endl;
		return 0;
	}

	printf("-1 -1 -1\n");

	return 0;
}