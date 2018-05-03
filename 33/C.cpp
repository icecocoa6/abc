#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;

	int ans = 0;
	int l = 0, r = 0;
	for (char c : S) {
		if (c == '+') {
			bool zero = false;
			for (auto d : S.substr(l, r - l))
				zero = zero || (d == '0');
			if (!zero) ans++;
			l = r + 1;
		}
		r++;
	}

	bool zero = false;
	for (auto d : S.substr(l, r - l))
		zero = zero || (d == '0');
	if (!zero) ans++;

	cout << ans << endl;

	return 0;
}