#include <iostream>
#include <vector>

using namespace std;

using sushi = pair<long, int>;


int main(int argc, char *argv[]) {
	int N;
	long C;
	cin >> N >> C;

	vector<sushi> s(N);
	
	for (int i = 0; i < N; i++) {
		long x;
		int v;
		cin >> x >> v;
		s[i] = make_pair(x, v);
	}

	long ans = 0;
	
	vector<long> cl(N); // clockwise
	vector<long> cc(N); // counter-clockwise
	vector<long> cl_max(N);
	vector<long> cc_max(N);
	
	cl[0] = s[0].second;
	cl_max[0] = cl[0] - s[0].first;
	for (int i = 1; i < N; i++) {
		cl[i] = cl[i - 1] + s[i].second;
		cl_max[i] = max(cl_max[i - 1], cl[i] - s[i].first);
	}

	cc[N-1] = s[N-1].second;
	cc_max[N-1] = cc[N-1] - (C - s[N-1].first);
	for (int i = N - 2; i >= 0; i--) {
		cc[i] = cc[i + 1] + s[i].second;
		cc_max[i] = max(cc_max[i + 1], cc[i] - (C - s[i].first));
	}

	ans = max(ans, cl_max[N - 1]);
	ans = max(ans, cc_max[0]);

	for (int i = 0; i < N - 1; i++)
		ans = max(ans, cl[i] - 2 * s[i].first + cc_max[i + 1]);

	for (int i = N - 1; i > 0; i--)
		ans = max(ans, cc[i] - 2 * (C - s[i].first) + cl_max[i - 1]);

	cout << ans << endl;
	return 0;
}