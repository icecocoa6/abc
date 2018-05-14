#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string s;
	cin >> s;

	char ch = s[0];
	int cnt = 0;
	for (auto c : s) {
		if (ch == c) cnt++;
		else {
			cout << ch << cnt;
			ch = c;
			cnt = 1;
		}
	}
	cout << ch << cnt << endl;

	return 0;
}