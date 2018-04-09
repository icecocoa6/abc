#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string s;
	cin >> s;
	int N = s.size();
	int L = (N - 1) / 2, R = N / 2;
	char c = s[L];
	for (; 0 <= L && R < N; L--, R++) {
		if (s[L] != c || s[R] != c) {
			break;
		}
	}

	cout << R << endl;
	return 0;
}