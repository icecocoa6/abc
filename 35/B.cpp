#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	int T;
	cin >> S >> T;

	int x = 0, y = 0, d = 0;
	for (auto c : S) {
		if (c == 'L') x--;
		if (c == 'R') x++;
		if (c == 'U') y++;
		if (c == 'D') y--;
		if (c == '?') d++;
	}

	int ans = abs(x) + abs(y);
	if (T == 1) ans += d;
	else if (ans > d) ans -= d;
	else ans = (d - ans) % 2;

	cout << ans << endl;

	return 0;
}