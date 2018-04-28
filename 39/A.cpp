#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C;
	cin >> A >> B >> C;
	cout << 2 * (A * B + B * C + C * A) << endl;
	return 0;
}