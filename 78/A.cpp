#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string X, Y;
	cin >> X >> Y;
	if (X < Y) cout << "<";
	else if (X > Y) cout << ">";
	else cout << "=";
	cout << endl;
	return 0;
}
