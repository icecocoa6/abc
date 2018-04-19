#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char *argv[]) {
	string A, B, C;
	cin >> A >> B >> C;
	cout << A[0] << (char)toupper(B[0]) << C[0] << endl;
	return 0;
}