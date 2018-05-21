#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double prob(long m, long n) {
	if (m <= 0 && n <= 0) return 1.0;
	if (m <= 0) m = 1;
	if (n <= 0) n = 1;
	return (double)m / n * prob(m - 1, n - 1);
}

long fact(long m) {
	if (m <= 0) return 1;
	return m * fact(m - 1);
}

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<int> C(N);
	for (int i = 0; i < N; i++) cin >> C[i];
	vector<int> ndiv(N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (i != j && C[i] % C[j] == 0)
				ndiv[i]++;

	double ans = 0.0;
	for (int i = 0; i < N; i++) {
		ans += (ndiv[i] % 2 == 0) ? ((double)(ndiv[i] + 2) / (2 * ndiv[i] + 2)) : 0.5;
	}

	cout << fixed << setprecision(10) << ans << endl;

	return 0;
}