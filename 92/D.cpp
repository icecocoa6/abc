#include <iostream>

using namespace std;

bool board[100][100];

int main(int argc, char *argv[]) {
	int A, B;
	cin >> A >> B;

	for (int y = 0; y < 50; y++) {
		for (int x = 0; x < 100; x++) {
			board[x][y] = false;
		}
	}

	for (int y = 50; y < 100; y++) {
		for (int x = 0; x < 100; x++) {
			board[x][y] = true;
		}
	}

	for (int i = 1, idx = 1; i < A; i++, idx += 2)
		board[idx % 100][(idx / 100) * 2 + 1] = true;

	for (int i = 1, idx = 1; i < B; i++, idx += 2)
		board[idx % 100][(idx / 100) * 2 + 51] = false;

	cout << 100 << " " << 100 << endl;
	for (int y = 0; y < 100; y++) {
		for (int x = 0; x < 100; x++) {
			if (board[x][y]) cout << ".";
			else cout << "#";
		}
		cout << endl;
	}

	return 0;
}