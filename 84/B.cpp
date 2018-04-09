#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool check(int A, int B, string S) {
	if (S[A] != '-') return false;
	for (int i = 0; i < A; i++)
		if (!isdigit(S[i]))
			return false;
	for (int i = A + 1; i < A + B + 1; i++)
		if (!isdigit(S[i]))
			return false;

	return true;
}

int main(int argc, char *argv[]) {
	int A, B;
	string S;
	cin >> A >> B >> S;

	if (check(A, B, S)) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}