#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int l[3];
	cin >> l[0] >> l[1] >> l[2];
	if (l[0] == l[1]) cout << l[2] << endl;
	else if (l[1] == l[2]) cout << l[0] << endl;
	else if (l[2] == l[0]) cout << l[1] << endl;
	return 0;
}