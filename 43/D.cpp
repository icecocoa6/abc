#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;

	for (int i = 1; i < S.size(); i++) {
		if (S[i] == S[i - 1]) {
			cout << i << " " << i + 1 << endl;
			return 0;
		} else if (i >= 2 && S[i - 2] == S[i]) {
			cout << i - 1 << " " << i + 1 << endl;
			return 0;
		}
	}

	printf("-1 -1\n");

	return 0;
}