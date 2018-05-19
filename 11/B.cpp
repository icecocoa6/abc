#include <iostream>
#include <algorithm>
#include <cctype>

char to_lower(char c) { return tolower(c); }

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;
	transform(begin(S), end(S), begin(S), to_lower);
	S[0] = toupper(S[0]);
	cout << S << endl;
	return 0;
}