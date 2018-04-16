#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;

	int a;
	for (a = 0; a < S.size() && S[a] != 'A'; a++);
	int z;
	for (z = S.size() - 1; z >= 0 && S[z] != 'Z'; z--);

	cout << z - a + 1 << endl;

	return 0;
}