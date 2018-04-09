#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	char c[4];
	cin >> c[0] >> c[1] >> c[2] >> c[3];

	int A, B, C, D;
	A = c[0] - '0';
	B = c[1] - '0';
	C = c[2] - '0';
	D = c[3] - '0';

	for (int i = 0; i < 2; i++, B*=-1) {
		for (int j = 0; j < 2; j++, C*=-1) {
			for (int k = 0; k < 2; k++, D*=-1) {
				int ans = A + B + C + D;
				if (ans != 7) continue;

				cout << A;
				cout << ((B >= 0) ? '+' : '-');
				cout << abs(B);
				cout << ((C >= 0) ? '+' : '-');
				cout << abs(C);
				cout << ((D >= 0) ? '+' : '-');
				cout << abs(D);
				cout << "=7" << endl;
				return 0;
			}
		}
	}

	return 0;
}