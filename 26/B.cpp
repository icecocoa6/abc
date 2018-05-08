#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<int> R(N);
	for (int i = 0; i < N; i++) cin >> R[i];
	sort(begin(R), end(R), greater<int>());

	long sum = 0;
	for (int i = 0; i < N; i++) {
		if (i % 2)
			sum -= R[i] * R[i];
		else
			sum += R[i] * R[i];
	}

	cout << fixed << setprecision(10) << M_PI * sum << endl;

	return 0;
}