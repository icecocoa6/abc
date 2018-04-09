#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	vector<int> c(26);

	cin >> S;
	for (int i = 0; i < S.size(); i++) {
		c[S[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (c[i] > 0) continue;
		cout << (char)(i + 'a') << endl;
		return 0;
	}

	cout << "None" << endl;
	return 0;
}
