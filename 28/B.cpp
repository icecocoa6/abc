#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;

	int ans[6] = {};
	for (auto c : S) {
		ans[c - 'A']++;
	}

	for (int i = 0; i < 5; i++) printf("%d ", ans[i]);
	printf("%d\n", ans[5]);

	return 0;
}