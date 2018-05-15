#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;

	vector<int> soul_gem(M + 1);
	long sum = 0;
	for (int i = 0; i < N; i++) {
		int l, r, s;
		cin >> l >> r >> s; 
		sum += s;
		l--; r--;
		soul_gem[l] += s;
		soul_gem[r + 1] -= s;
	}

	for (int i = 1; i < M; i++) soul_gem[i] += soul_gem[i - 1];

	int m = sum;
	for (int i = 0; i < M; i++) m = min(m, soul_gem[i]);

	cout << sum - m << endl;

	return 0;
}