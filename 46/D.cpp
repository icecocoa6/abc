#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;

	int g = 0;
	for (int i = 0; i < S.size(); i++)
		if (S[i] == 'g')
			g++;
	int p = S.size() - g;

	cout << (g - p) / 2 << endl;
	return 0;
}