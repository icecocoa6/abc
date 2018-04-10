#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	long H, W;
	cin >> H >> W;

	long long ans = 10000000000;
	for (int i = 1; i <= H - 1; i++) {
		long long a = W * i;

		long long bh = (H - i) / 2;
		long long ch = H - (i + bh);
		long long b = W * bh, c = W * ch;
		ans = min(ans, max(max(a, b), c) - min(min(a, b), c));

		long long bw = W / 2;
		long long cw = W - bw;
		b = (H - i) * bw, c = (H - i) * cw;
		ans = min(ans, max(max(a, b), c) - min(min(a, b), c));
	}

	for (int i = 1; i <= W - 1; i++) {
		long long a = H * i;

		long long bw = (W - i) / 2;
		long long cw = W - (i + bw);
		long long b = H * bw, c = H * cw;
		ans = min(ans, max(max(a, b), c) - min(min(a, b), c));

		long long bh = H / 2;
		long long ch = H - bh;
		b = (W - i) * bh, c = (W - i) * ch;
		ans = min(ans, max(max(a, b), c) - min(min(a, b), c));
	}

	cout << ans << endl;

	return 0;
}