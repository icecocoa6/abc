#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;
	cout << S[0] - '0' + S[1] - '0' << endl;
	return 0;
}