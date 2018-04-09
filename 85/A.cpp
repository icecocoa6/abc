#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string s;
	cin >> s;

	s[0] = '2';
	s[1] = '0';
	s[2] = '1';
	s[3] = '8';

	cout << s << endl;

	return 0;
}