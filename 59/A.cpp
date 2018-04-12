#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string S1, S2, S3;
	cin >> S1 >> S2 >> S3;
	cout << (char)toupper(S1[0]) << (char)toupper(S2[0]) << (char)toupper(S3[0]) << endl;
	return 0;
}