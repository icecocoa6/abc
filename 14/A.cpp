#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int a, b;
	cin >> a >> b;
	cout << (b - a % b) % b << endl;
	return 0;
}