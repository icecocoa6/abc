#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
	int N;
	cin >> N;

	vector<pair<int, int>> a(N);

	for (int i = 0; i < N; i++) {
		int ai;
		cin >> ai;
		a[i] = make_pair(ai, i);
	}

	sort(begin(a), end(a));

	vector<int> b(N);

	b[a[0].second] = 0;
	int x = 0;
	for (int i = 1; i < N; i++) {
		if (a[i - 1].first < a[i].first) x++;
		b[a[i].second] = x;
	}

	for (auto p : b) cout << p << endl;

	return 0;
}