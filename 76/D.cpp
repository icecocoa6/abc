#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<int> t(N+3);
	vector<int> v(N+3);

	t[0] = numeric_limits<int>::min();
	t[1] = 0;
	t[N+2] = numeric_limits<int>::max();
	for (int i = 2; i <= N + 1; i++) {
		int ti;
		cin >> ti;
		t[i] = ti + t[i-1];
	}
	v[0] = 0;
	for (int i = 1; i <= N; i++) cin >> v[i];
	v[N+1] = 0;

	vector<double> V(2*t[N+1]+1);

	for (int x = 0; x <= 2 * t[N+1]; x++) {
		double m = numeric_limits<double>::max();
		for (int i = 0; i <= N+1; i++) {
			if (0.5 * x < t[i]) {
				m = min(m, - 0.5 * x + (v[i] + t[i]));
			} else if (0.5 * x < t[i+1]) {
				m = min(m, (double)v[i]);
			} else {
				m = min(m, 0.5 * x + (v[i] - t[i+1]));
			}
		}
		V[x] = m;
	}

	double ans = 0.0;
	for (int x = 0; x < 2 * t[N+1]; x++) {
		ans += V[x] + V[x+1];
	}

	cout << setprecision(20) << 0.25 * ans << endl;

	return 0;
}
