#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, D;
	cin >> A >> D;
	cout << max((A + 1) * D, A * (1 + D)) << endl;
	return 0;
}
