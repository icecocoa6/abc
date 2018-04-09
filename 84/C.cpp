#include <iostream>

using namespace std;

int N;
int C[500];
int S[500];
int F[500];

int main(int argc, char *argv[]) {
	cin >> N;

	for (int i = 0; i < N - 1; i++)
		cin >> C[i] >> S[i] >> F[i];

	for (int i = 0; i < N; i++) {
		int x = 0;
		int idx = i;
		while (idx != N - 1) {
			if (x < S[idx])
				x = S[idx];
			else if (x % F[idx] != 0)
				x = (x / F[idx] + 1) * F[idx];

			x += C[idx];
			idx++;
		}
		cout << x << endl;
	}

	return 0;
}