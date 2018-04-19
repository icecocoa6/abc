#include <iostream> 
#include <vector>

using namespace std;

static const long MOD = 1000000007;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		int Ai;
		cin >> Ai;
		A[Ai]++;
		if (A[Ai] >= 3) {
			printf("0\n");
			return 0;
		}
	}

	int one = 0, two = 0;
	for (int i = 0; i < N; i++) {
		if (A[i] == 1) one++;
		else if (A[i] == 2) two++;
	}

	if (N % 2 == 0 && one != 0) {
		printf("0\n");
		return 0;
	}
	if (N % 2 == 1 && (one != 1 || A[0] != 1)) {
		printf("0\n");
		return 0;
	}

	long ans = 1;
	while (two > 0) { ans = (ans * 2) % MOD; two--; }

	cout << ans << endl;
	return 0;
}