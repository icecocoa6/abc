#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	std::cin >> S;
	string::iterator c = S.begin();

	while (true) {
		string s;


		s = "dreamerase";
		if (equal(c, c + s.length(), s.begin())) {
			c += 5;
			continue;
		}
		s = "dreamer";
		if (equal(c, c + s.length(), s.begin())) {
			c += s.length();
			continue;
		}
		s = "dream";
		if (equal(c, c + s.length(), s.begin())) {
			c += s.length();
			continue;
		}
		s = "eraser";
		if (equal(c, c + s.length(), s.begin())) {
			c += s.length();
			continue;
		}
		s = "erase";
		if (equal(c, c + s.length(), s.begin())) {
			c += s.length();
			continue;
		}

		break;
	}

	cout << (c == S.end() ? "YES" : "NO") << endl;

	return 0;
}