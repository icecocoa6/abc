#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;

	string ans;
	for (char c : S) {
		if (c == '0' || c == '1') ans.push_back(c);
		else if (c == 'B' && !ans.empty()) ans.pop_back();
	}

	cout << ans << endl;
	return 0;
}