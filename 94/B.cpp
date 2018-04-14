#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N, M, X;
	cin >> N >> M >> X;

	vector<bool> A(N);
	for (int i = 0; i < M; i++) {
		int ai;
		cin >> ai;
		A[ai] = true;
	}

	int sum = 0;
	for (int i = X; i > 0; i--) sum += A[i-1];

	int sum2 = 0;
	for (int i = X; i < N - 1; i++) sum2 += A[i+1];

	cout << min(sum, sum2) << endl;

	return 0;
}