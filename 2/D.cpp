#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;
	vector<set<int>> friends(N);
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		friends[x].insert(y);
		friends[y].insert(x);
	}

	int ans = 0;
	for (int i = 0; i < N; i++) {
		set<int> clique;
		clique.insert(i);

		for (int j = 0; j < N; j++) {
			if (i == j) continue;

			bool failed = false;
			for (auto v : clique) {
				if (friends[j].find(v) != end(friends[j])) continue;
				failed = true;
				break;
			}

			if (!failed) {
				clique.insert(j);
			}
		}

		ans = max(ans, (int)clique.size());
	}

	cout << ans << endl;

	return 0;
}