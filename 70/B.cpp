#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	cout << max(0, min(B, D) - max(A, C)) << endl;
	return 0;
}