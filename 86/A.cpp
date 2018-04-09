#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int a, b;
	cin >> a >> b;
	cout << ((a & 1) && (b & 1) ? "Odd" : "Even") << endl;
	return 0;
}