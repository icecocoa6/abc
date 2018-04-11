#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	long K;
	cin >> N >> K;

	vector<pair<int, int>> ab(N);
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		ab[i] = make_pair(a, b);
	}

	sort(begin(ab), end(ab));

	long idx = 0;
	for (int i = 0; i < N; i++) {
		int a = ab[i].first, b = ab[i].second;
		if (K <= idx + b) {
			cout << a << endl;
			return 0;
		}

		idx += b;
	}

	return 0;
}