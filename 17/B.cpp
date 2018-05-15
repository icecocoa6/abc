#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string X;
	cin >> X;

	int idx = 0;
	while (idx < X.size()) {
		string s = X.substr(idx, 2);
		if (s == "ch") idx += 2;
		else if (s[0] == 'o') idx += 1;
		else if (s[0] == 'k') idx += 1;
		else if (s[0] == 'u') idx += 1;
		else {
			printf("NO\n");
			return 0;
		}
	}

	printf("YES\n");

	return 0;
}