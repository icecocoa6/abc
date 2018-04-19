#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	int sum = 0;
	vector<int> T(N);
	for (int i = 0; i < N; i++) {
		cin >> T[i];
		sum += T[i];
	}

	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int P, X;
		cin >> P >> X;
		cout << sum - T[P-1] + X << endl;
	}

	return 0;
}