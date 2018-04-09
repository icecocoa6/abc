#include <iostream>
#include <string>

using namespace std;

bool is_doubled(string s) {
	if (s.size() % 2 != 0) return false;
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() / 2 + i]) return false;
	}
	return true;
}

int main(int argc, char *argv[]) {
	string S;
	cin >> S;

	while (!S.empty()) {
		S.pop_back();
		if (is_doubled(S)) {
			cout << S.size() << endl;
			return 0;
		}
	}

	return 0;
}