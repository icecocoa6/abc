#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	string s;
	cin >> N;

	bool has_yellow = false;
	for (int i = 0; i < N; i++) {
		cin >> s;
		if (s[0] == 'Y') has_yellow = true;
	}

	cout << (has_yellow ? "Four" : "Three") << endl;

	return 0;
}