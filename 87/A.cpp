#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int X, A, B;
	cin >> X >> A >> B;
	X -= A;
	X %= B;
	cout << X << endl;
	return 0;
}