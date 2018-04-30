#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	vector<string> S(N);

	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}

	for (int x = 0; x < N; x++) {
		for (int y = N - 1; y >= 0; y--) {
			cout << S[y][x];
		}
		cout << endl;
	}

	return 0;
}