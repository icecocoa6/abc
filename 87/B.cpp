#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C, X;
	cin >> A >> B >> C >> X;

	int ans = 0;
	for (int a = 0; a <= A; a++) {
		for (int b = 0; b <= B; b++) {
			if (500 * a + 100 * b <= X && X <= 500 * a + 100 * b + 50 * C) ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
