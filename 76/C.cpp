#include <iostream>
#include <string>

using namespace std;



int main(int argc, char *argv[]) {
	string S, T;
	cin >> S >> T;

	for (int i = S.size() - T.size(); i >= 0; i--) {
		bool matched = true;
		for (int j = 0; matched && j < T.size(); j++) {
			if (S[i + j] != '?' && S[i + j] != T[j]) matched = false;
		}

		if (matched) {
			for (int j = 0; j < S.size(); j++) {
				if (S[j] == '?') S[j] = 'a';
			}
			for (int j = 0; j < T.size(); j++) {
				S[i + j] = T[j];
			}

			cout << S << endl;
			return 0;
		}
	}

	cout << "UNRESTORABLE" << endl;

	return 0;
}
