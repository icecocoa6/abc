#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	bool cs[26] = {};
	string S;
	cin >> S;
	for (auto c : S) {
		auto i = c - 'a';
		if (cs[i]) {
			printf("no\n");
			return 0;
		}
		cs[i] = true;
	}
	printf("yes\n");
	return 0;
}