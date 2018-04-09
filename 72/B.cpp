#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i+=2) {
		cout << s[i];
	}
	cout << endl;

	return 0;
}