#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C;
	cin >> A >> B >> C;
	if (A == B) cout << C;
	else if (B == C) cout << A;
	else if (C == A) cout << B;
	cout << endl;
	return 0;
}