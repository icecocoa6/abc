#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	if (A + B > C + D) cout << "Left";
	else if (A + B == C + D) cout << "Balanced";
	else cout << "Right";
	cout << endl;
	return 0;
}