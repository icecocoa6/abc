#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;
	int K;
	cin >> K;

	vector<string> subs(K);
	for (int i = 0; i < S.size(); i++) {
		for (int j = i; j < S.size(); j++) {
			string s = S.substr(i, j - i + 1);
			if (!subs.back().empty() && s >= subs.back()) break;

			for (int k = 0; k < K; k++) {
				if (s == subs[k]) break;
				if (s < subs[k] || subs[k].empty()) {
					subs.insert(subs.begin() + k, s);
					subs.pop_back();
					break;
				}
			}
		}
	}

	cout << subs.back() << endl;
}