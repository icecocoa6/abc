#include <iostream>
#include <vector>

using namespace std;

static const long MOD = 1000000007;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<long> count(N+1);
	for (int i = 1; i <= N; i++) {
		int n = i;
		while (n > 1) {
			for (int j = 2; j <= N; j++) {
				if (n % j != 0) continue;
				n /= j;
				count[j]++;
				j--;
			}
		}
	}

	long ans = 1;
	for (int i = 1; i <= N; i++) {
		ans = (ans * (count[i] + 1)) % MOD;
	}

	cout << ans << endl;
	return 0;
}
