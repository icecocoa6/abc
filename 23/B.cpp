#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	string S;
	cin >> N >> S;

	string T = "b";
	int i;
	for (i = 1; T.size() < N; i++) {
		if (i % 3 == 1) {
			T = "a" + T + "c";
		} else if (i % 3 == 2) {
			T = "c" + T + "a";
		} else if (i % 3 == 0) {
			T = "b" + T + "b";
		}
	}

	if (S == T) cout << i - 1 << endl;
	else cout << -1 << endl;

	return 0;
}