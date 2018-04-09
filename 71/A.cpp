#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int x, a, b;
	cin >> x >> a >> b;
	if (abs(x - a) < abs(x - b)) cout << "A" << endl;
	else cout << "B" << endl;
	return 0;
}