#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<string> S(N);
	vector<int> P(N);
	for (int i = 0; i < N; i++) cin >> S[i] >> P[i];

	int sum = 0;
	for (auto p : P) sum += p;


	for (int i = 0; i < N; i++) {
		if (sum < 2 * P[i]) {
			cout << S[i] << endl;
			return 0;
		}
	}

	printf("atcoder\n");
	return 0;
}