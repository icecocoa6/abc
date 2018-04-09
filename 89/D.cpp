#include <iostream>

#define ABS(x) (((x) > 0) ? (x) : -(x))

using namespace std;

int main(int argc, char *argv[]) {
	int H, W, D;
	cin >> H >> W >> D;

	int xs[90001];
	int ys[90001];

	for (int y = 0; y < H; y++) {
		for (int x = 0; x < W; x++) {
			int A;
			cin >> A;
			xs[A] = x;
			ys[A] = y;
		}
	}

	int ds[90001] = {};

	for (int a = 1; a <= H * W - D; a++) {
		int dx = xs[a+D] - xs[a];
		int dy = ys[a+D] - ys[a];
		ds[a + D] = ABS(dx) + ABS(dy) + ds[a];
	}

	int Q;
	cin >> Q;
	for (int i = 0; i < Q; i++) {
		int L, R;
		cin >> L >> R;
		cout << (ds[R] - ds[L]) << endl;
	}

	return 0;
}