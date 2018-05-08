#include <iostream>

using namespace std;


void perm(int idx, string &S) {
	if (idx == S.size()) {
		cout << S << endl;
		return;
	}
	for (auto c : {'a', 'b', 'c'}) {
		S[idx] = c;
		perm(idx + 1, S);
	}
}

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	string S(N, 'x');
	perm(0, S);

	return 0;
}