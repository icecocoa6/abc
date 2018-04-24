#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int N, L;
	cin >> N >> L;
	vector<string> S(N);
	for (int i = 0; i < N; i++) cin >> S[i];

	sort(begin(S), end(S));

	for (auto s : S) cout << s;
	cout << endl;

	return 0;
}