#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

using point = pair<int, int>;
static const double EPS = 1e-10;

int main(int argc, char *argv[]) {
	long N;
	cin >> N;

	vector<point> p(N);
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		p[i] = {x, y};
	}

	int right = 0;
	int obtuse = 0;
	for (int i = 0; i < N; i++) {
		vector<double> v;
		for (int j = 0; j < N; j++) {
			if (i == j) continue;

			v.push_back(atan2(p[j].second - p[i].second, p[j].first - p[i].first));
		}

		sort(begin(v), end(v));

		for (int j = 0; j < N - 1; j++)
			v.push_back(v[j] + 2 * M_PI);

		int l = 0, r = 0;
		for (int j = 0; j < N - 1; j++) {
			while (l < v.size() && v[j] + M_PI / 2 - v[l] > EPS) l++; // acute
			while (l < v.size() && abs(v[j] + M_PI / 2 - v[l]) <= EPS) right++, l++; // right
			while (r < v.size() && v[j] + M_PI - v[r] > EPS) r++; // obtuse
			obtuse += r - l;
		}
	}

	auto all = N * (N - 1) * (N - 2) / 6;
	printf("%d %d %d\n", all - (right + obtuse), right, obtuse);

	return 0;
}