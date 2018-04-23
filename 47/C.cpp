#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;
	char c = S[0];
	int ans = 0;
	for (int i = 1; i < S.size(); i++) {
		if (S[i] != c) {
			c = S[i];
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}