#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<vector<int>> as(N);
	for (int i = 1; i <= N - 1; i++) {
		int b;
		cin >> b;
		as[b - 1].push_back(i);
	}

	vector<int> s(N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (s[j] > 0) continue;

			if (as[j].empty()) {
				s[j] = 1;
			} else {
				vector<int> ss(as[j].size());
				int M = 0, m = numeric_limits<int>::max();
				bool unk = false;
				for (auto a : as[j]) {
					if (s[a] == 0) { unk = true; break; }
					M = max(M, s[a]);
					m = min(m, s[a]);
				}
				if (unk) continue;

				s[j] = M + m + 1;
			}
		}
	}

	cout << s[0] << endl;
}