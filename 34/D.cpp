#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

bool sat(int K, double g, vector<int> &w, vector<int> &p) {
	vector<double> salt(w.size());
	for (int i = 0; i < w.size(); i++) {
		salt[i] = w[i] * (p[i] - g);
	}

	sort(begin(salt), end(salt), greater<double>());

	double res = 0.0;
	for (int i = 0; i < K; i++) {
		res += salt[i];
	}

	return res >= 0.0;
}

int main(int argc, char *argv[]) {
	int N, K;
	cin >> N >> K;

	vector<int> w(N), p(N);
	for (int i = 0; i < N; i++) cin >> w[i] >> p[i];

	double ok = 0.0, ng = 100.0, res = 0.0;
	for (int i = 0; i < 1000 && ok < ng; i++) {
		double mid = (ok + ng) / 2;
		if (sat(K, mid, w, p)) { ok = mid; res = ok; }
		else ng = mid;
	}

	cout << fixed << setprecision(16) << res << endl;

	return 0;
}