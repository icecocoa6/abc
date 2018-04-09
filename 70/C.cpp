#include <iostream> 
#include <vector>
#include <numeric>

using namespace std;

long long gcd(long long a, long long b) {
	while (a % b != 0) {
		long long t = a;
		a = b;
		b = t % b;
	}
	return b;
}

long long lcm(long long a, long long b) {
	long long g = gcd(a, b);
	return g * (a / g) * (b / g);
}

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	vector<long long> T(N);
	for (int i = 0; i < N; i++) cin >> T[i];

	long long ans = T[0];
	for (int i = 1; i < N; i++) ans = lcm(ans, T[i]);

	cout << ans << endl;

	return 0;
}
