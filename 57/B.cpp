#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;

	vector<pair<int, int>> students(N);
	vector<pair<int, int>> checkpoints(M);

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		students[i] = make_pair(a, b);
	}

	for (int i = 0; i < M; i++) {
		int c, d;
		cin >> c >> d;
		checkpoints[i] = make_pair(c, d);
	}

	for (int i = 0; i < N; i++) {
		auto &s = students[i];
		int d = 1000000000;
		int index = -1;

		for (int j = 0; j < M; j++) {
			auto &c = checkpoints[j];
			int di = abs(s.first - c.first) + abs(s.second - c.second);
			if (d > di) {
				d = di;
				index = j;
			}
		}

		cout << index + 1 << endl;
	}

	return 0;
}
