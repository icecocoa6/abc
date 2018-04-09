#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	string S;
	cin >> N;
	cin >> S;

	int l = 0;
	list<char> ans;
	for (int i = 0; i < N; i++) {
		if (S[i] == '(') {
			l++;
		} else if (S[i] == ')') {
			l--;
			if (l < 0) {
				ans.push_front('(');
				l = 0;
			}
		}
		ans.push_back(S[i]);
	}

	for (int i = 0; i < l; i++) ans.push_back(')');

	for (auto c : ans) cout << c;
	cout << endl;
	return 0;
}
