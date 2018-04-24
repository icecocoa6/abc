#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;
	int ans = 0;
	if (S[0] == 'o') ans += 100;
	if (S[1] == 'o') ans += 100;
	if (S[2] == 'o') ans += 100;
	cout << 700 + ans << endl;
	return 0;
}