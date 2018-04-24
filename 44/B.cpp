#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int cnt[26] = {};
	string S;
	cin >> S;
	for (auto c : S) cnt[c-'a']++;

	for (auto i : cnt) {
		if (i % 2 != 0) {
			printf("No\n");
			return 0;
		}
	}

	printf("Yes\n");
	return 0;
}