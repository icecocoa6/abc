#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B;
	string S;
	cin >> A >> S >> B;
	if (S[0] == '+') cout << A + B << endl;
	else if (S[0] == '-') cout << A - B << endl;
	return 0;
}