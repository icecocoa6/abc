#include <iostream>
#include <vector>

using namespace std;

template <typename T>
using square = vector<vector<T>>;

template <typename T>
square<T> make_square(int size) {
	return vector<vector<T>>(size, vector<T>(size));
}

const int A = 1;
const int B = -1;

int score(const square<int> &board, const square<int> b, const square<int> c) {
	int res = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] == board[i + 1][j]) res += b[i][j];
			else res -= b[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (board[i][j] == board[i][j + 1]) res += c[i][j];
			else res -= c[i][j];
		}
	}

	return res;
}

int solve(int step, square<int> &board, const square<int> b, const square<int> c) {
	if (step == 9) return score(board, b, c);

	int res = (step % 2 == 0) ? -1000000000 : 1000000000;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] != 0) continue;
			board[i][j] = (step % 2 == 0) ? A : B;
			int s = solve(step + 1, board, b, c);
			res = (step % 2 == 0) ? max(res, s) : min(res, s);
			board[i][j] = 0;
		}
	}

	return res;
}

int main(int argc, char *argv[]) {
	square<int> board = make_square<int>(3);
	square<int> b = make_square<int>(3);
	square<int> c = make_square<int>(3);

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			cin >> b[i][j];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			cin >> c[i][j];

	int sum = 0;
	for (int i = 0; i < 3; i++) 
		for (int j = 0; j < 3; j++)
			sum += b[i][j] + c[i][j];

	int diff = solve(0, board, b, c);
	cout << (diff + sum) / 2 << endl << (sum - diff) / 2 << endl;

	return 0;
}