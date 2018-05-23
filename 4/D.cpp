#include <iostream>

using namespace std;

int count_step(int l, int r, int c) {
	int dl = abs(l - c);
	int dr = abs(r - c);
	if (c < l) return dr * (dr + 1) / 2 - (dl - 1) * dl / 2;
	else if (l <= c && c <= r) return dl * (dl + 1) / 2 + dr * (dr + 1) / 2;
	else return dl * (dl + 1) / 2 - (dr - 1) * dr / 2;
}

int main(int argc, char *argv[]) {
	int R, G, B;
	cin >> R >> G >> B;

	int ans = 1000000000;
	for (int gl = -1000; gl <= 1000; gl++) {
		int gr = gl + G - 1;
		int rl = min(gl - R, -100 - R / 2);
		int rr = rl + R - 1;
		int bl = max(gr + 1, 100 - B / 2);
		int br = bl + B - 1;

		int step = count_step(rl, rr, -100) + count_step(gl, gr, 0) + count_step(bl, br, 100);
		ans = min(ans, step);
	}

	cout << ans << endl;

	return 0;
}