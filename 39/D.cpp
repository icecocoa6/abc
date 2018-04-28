#include <iostream>
#include <vector>

using namespace std;

int H, W;

bool enclosed(vector<string> &S, int x, int y) {
	if (S[y][x] == '.') return false;

	for (int i = -1; i <= 1; i++) {
		if (x + i < 0 || x + i >= W) continue;

		for (int j = -1; j <= 1; j++) {
			if (y + j < 0 || y + j >= H) continue;
			if (S[y + j][x + i] == '.') return false;
		}
	}

	return true;
}

int main(int argc, char *argv[]) {
	cin >> H >> W;
	vector<string> S(H);
	for (int i = 0; i < H; i++) cin >> S[i];

	vector<pair<int, int>> point;
	for (int y = 0; y < H; y++) {
		for (int x = 0; x < W; x++) {
			if (enclosed(S, x, y)) {
				point.push_back(make_pair(x, y));
			}
		}
	}

	vector<string> T(H);
	for (int i = 0; i < H; i++) T[i] = string(W, '.');

	for (auto p : point) {
		int x = p.first, y = p.second;
		for (int i = -1; i <= 1; i++) {
			if (x + i < 0 || x + i >= W) continue;
			for (int j = -1; j <= 1; j++) {
				if (y + j < 0 || y + j >= H) continue;
				T[y + j][x + i] = '#';
			}
		}
	}


	for (int i = 0; i < H; i++) {
		if (S[i] != T[i]) {
			printf("impossible\n");
			return 0;
		}
	}

	for (int i = 0; i < H; i++) T[i] = string(W, '.');

	for (auto p : point) {
		int x = p.first, y = p.second;
		T[y][x ] = '#';
	}

	printf("possible\n");
	for (auto t : T) cout << t << endl;

	return 0;
}