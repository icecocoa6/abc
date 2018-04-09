#include <iostream> 

using namespace std;

static const long long MOD = 1000000007;

long long fact[100001];

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;

	fact[0] = 1;
	for (int i = 1; i <= max(N, M); i++) {
		fact[i] = (fact[i-1] * i) % MOD;
	}

	long long ans;
	if (abs(N - M) > 1) ans = 0;
	else if (abs(N - M) == 1) ans = (fact[N] * fact[M]) % MOD;
	else ans = (2 * fact[N] * fact[M]) % MOD;

	cout << ans << endl;

	return 0;
}