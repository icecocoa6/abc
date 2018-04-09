#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> point;

int main(int argc, char *argv[]) {
	int N;
	vector<point> reds;
	vector<point> blues;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		reds.push_back(point(a, b));
	}

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		blues.push_back(point(a, b));
	}

	sort(blues.begin(), blues.end());
	sort(reds.begin(), reds.end());

	int cnt = 0;
	for (point &b : blues) {
		int idx = -1;
		int max = -1;

		for (int i = 0; i < reds.size(); i++) {
			if (reds[i].first == -1) continue;;
			if (reds[i].first > b.first) break;
			if (reds[i].second > max && reds[i].second < b.second) {
				idx = i;
				max = reds[i].second;
			}
		}

		if (idx != -1) {
			reds[idx] = point(-1, -1);
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
