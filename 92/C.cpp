#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	int A[100001];
	int sum = 0;

	cin >> N;
	A[0] = 0;
	for (int i = 1; i <= N; i++) cin >> A[i];

	for (int i = 1; i <= N; i++) sum += abs(A[i] - A[i-1]);
	sum += abs(A[N] - 0);

	for (int i = 1; i < N; i++) {
		int s = sum;
		s -= abs(A[i] - A[i-1]);
		s -= abs(A[i+1] - A[i]);
		s += abs(A[i-1] - A[i+1]);
		cout << s << endl;
	}

	sum -= abs(A[N] - A[N-1]);
	sum -= abs(A[0] - A[N]);
	sum += abs(A[N-1] - A[0]);
	cout << sum << endl;

	return 0;
}