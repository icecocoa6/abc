#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	char c[4][4];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			string S;
			cin >> S;
			c[i][j] = S[0];
		}
	}

	for (int i = 3; i >= 0; i--)
		for (int j = 3; j >= 0; j--)
			cout << c[i][j] << ((j > 0) ? " " : "\n");

	return 0;
}