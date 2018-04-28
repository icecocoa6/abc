#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	vector<pair<int, int>> a(N);
	for (int i = 1; i <= N; i++) {
		int ai;
		cin >> ai;
		a[i-1] = make_pair(ai, i);
	}

	sort(begin(a), end(a), greater<pair<int, int>>());

	for (auto p : a) cout << p.second << endl;

	return 0;
}