#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N, T;
	cin >> N >> T;

	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A[i];

	long ans = 0;
	for (int i = 1; i < N; i++) ans += min(A[i] - A[i - 1], T);
	ans += T;

	cout << ans << endl;

	return 0;
}