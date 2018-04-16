#include <iostream>
#include <vector>

using namespace std;



int main(int argc, char *argv[]) {
	long N, A, B;

	cin >> N >> A >> B;

	vector<long> X(N);
	for (int i = 0; i < N; i++) cin >> X[i];

	long sum = 0;
	for (int i = 1; i < N; i++) {
		sum += min((X[i] - X[i - 1]) * A, B);
	}

	cout << sum << endl;

	return 0;
}
