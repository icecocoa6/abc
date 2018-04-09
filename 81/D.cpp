#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	int min = 0, max = 0;
	int min_idx = 0, max_idx = 0;
	for (int i = 0; i < N; i++) {
		int A;
		cin >> A;
		if (min > A) {
			min = A; min_idx = i;
		}

		if (max < A) {
			max = A; max_idx = i;
		}
	}

	cout << 2 * N - 1 << endl;
	if (abs(min) < abs(max)) {
		for (int i = 0; i < N; i++) {
			//A[i] += max;
			cout << max_idx + 1 << " " << i + 1 << endl;
		}

		for (int i = 0; i < N - 1; i++) {
			//A[i + 1] += A[i];
			cout << i + 1 << " " << i + 2 << endl;
		}
	} else {
		for (int i = 0; i < N; i++) {
			//A[i] += min;
			cout << min_idx + 1 << " " << i + 1 << endl;
		}

		for (int i = N - 1; i >= 1; i--) {
			//A[i - 1] += A[i];
			cout << i + 1 << " " << i << endl;
		}
	}

	return 0;
}