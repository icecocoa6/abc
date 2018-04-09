#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> interval;

int records[100001];

int main(int argc, char *argv[]) {
	int N, C;
	cin >> N >> C;

	vector<interval> ch[31];
	for (int i = 0; i < N; i++) {
		int si, ti, ci;
		cin >> si >> ti >> ci;
		ch[ci].push_back(interval(si, ti));
	}

	for (int i = 1; i <= C; i++) {
		sort(ch[i].begin(), ch[i].end());
		
		for (int j = ch[i].size() - 1; 1 <= j; j--) {
			if (ch[i][j - 1].second == ch[i][j].first) {
				ch[i][j - 1].second = ch[i][j].second;
				ch[i].erase(ch[i].begin() + j);
			}
		}
	}

	for (int i = 1; i <= C; i++)
		for (int j = 0; j < ch[i].size(); j++)
			for (int k = ch[i][j].first; k <= ch[i][j].second; k++)
				records[k]++;

	int ans = 0;
	for (int i = 1; i <= 100000; i++) {
		ans = max(records[i], ans);
	}

	cout << ans << endl;

	return 0;
}