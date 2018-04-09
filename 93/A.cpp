#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	bool a, b, c;
	a = b = c = false;
	for (int i = 0; i < 3; i++) {
		char ch;
		cin >> ch;
		if (ch == 'a') a = true;
		if (ch == 'b') b = true;
		if (ch == 'c') c = true;
	}
	if (a && b && c) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}