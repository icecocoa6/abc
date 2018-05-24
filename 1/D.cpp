#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<pair<int, int>> times(N);
	for (int i = 0; i < N; i++) {
		int S, E;
		scanf("%d-%d", &S, &E);
		S -= S % 5;
		E = ((E + 5 - 1) / 5) * 5;
		if (E % 100 == 60) E = E + 100 - 60;
		times[i] = {S, E};

	}

	sort(begin(times), end(times));

	int l = times[0].first, r = times[0].second;
	vector<pair<int, int>> ans;
	for (int i = 1; i < N; i++) {
		if (times[i].first <= r) {
			r = max(r, times[i].second);
		} else {
			ans.push_back({l, r});
			l = times[i].first;
			r = times[i].second;
		}
	}
	ans.push_back({l, r});

	for (auto t : ans) {
		cout << setfill('0') << setw(4) << t.first << "-";
		cout << setfill('0') << setw(4) << t.second << endl;
	}
}