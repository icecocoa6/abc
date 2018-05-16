#include <iostream>

using namespace std;

int main(int argc, char *argv0[]) {
	string A, B;
	cin >> A >> B;
	if (A.size() > B.size()) cout << A << endl;
	else cout << B << endl;
	return 0;
}