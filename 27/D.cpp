#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;

	vector<int> m(S.size());
	for (int i = S.size() - 2; i >= 0; i--) {
		m[i] = m[i + 1];
		if (S[i] == '+') m[i] += 1;
		if (S[i] == '-') m[i] -= 1;
	}

	vector<int> steps;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == 'M') steps.push_back(m[i]);
	}
	sort(begin(steps), end(steps));

	int ans = 0;
	for (int i = 0; i < steps.size() / 2; i++) ans -= steps[i];
	for (int i = steps.size() / 2; i < steps.size(); i++) ans += steps[i];

	cout << ans << endl;

	return 0;
}