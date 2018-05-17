#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	int N;
	cin >> S >> N;

	for (int i = 0; i < N; i++) {
		int l, r;
		cin >> l >> r;
		string h = S.substr(0, l - 1);
		string c = S.substr(l - 1, r - l + 1);
		string t = S.substr(r, S.size() - r);
		reverse(begin(c), end(c));
		S = h + c + t;
	}

	cout << S << endl;
	return 0;
}