#include <iostream>

using namespace std;

int N;
bool open[10];
bool F[100][10];
long P[100][11];

long benefit() {
	long sum = 0;

	for (int i = 0; i < N; i++) {
		int n = 0;
		for (int j = 0; j < 10; j++) {
			if (F[i][j] && open[j]) n++;
		}

		sum += P[i][n];
	}

	return sum;
}

int main(int argc, char *argv[]) {
	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < 10; j++)
			cin >> F[i][j];
	for (int i = 0; i < N; i++)
		for (int j = 0; j <= 10; j++)
			cin >> P[i][j];

	long ans = -10000000000;
	for (long i = 1; i < (1 << 10); i++) {
		for (int j = 0; j < 10; j++) 
			open[j] = (i & (1L << j)) ? true : false;

		ans = max(ans, benefit());
	}

	cout << ans << endl;
	return 0;
}