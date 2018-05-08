#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
	long N, K;
	cin >> N >> K;

	long pattern = -6 * K * K + 6 * (N + 1) * K - 3 * N - 2;
	double ans = (double)pattern / (N * N * N);

	cout << fixed << setprecision(20) << ans << endl;

	return 0;
}