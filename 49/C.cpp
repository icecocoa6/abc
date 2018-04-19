#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;
	reverse(begin(S), end(S));

	string words[] = { "maerd", "remaerd", "esare", "resare" };
	int idx = 0;
	while (idx < S.size()) {
		bool matched = false;
		for (int i = 0; i < 4; i++) {
			string &w = words[i];
			if (S.substr(idx, w.size()) == w) {
				matched = true;
				idx += w.size();
				break;
			}
		}

		if (!matched) {
			printf("NO\n");
			return 0;
		}
	}

	printf("YES\n");

	return 0;
}