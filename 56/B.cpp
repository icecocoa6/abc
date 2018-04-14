#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int W, a, b;
	cin >> W >> a >> b;
	int d = 0;
	if (b > a) d = max(0, b - (a + W));
	else d = max(0, a - (b + W));
	cout << d << endl;
	return 0;
}