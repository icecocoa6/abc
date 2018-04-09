#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	char c[4];
	cin >> c[0] >> c[1] >> c[2] >> c[3];

	if ((c[0] == c[1] && c[1] == c[2]) || (c[1] == c[2] && c[2] == c[3]))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}