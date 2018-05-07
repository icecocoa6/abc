#include <iostream>
#include <vector>

using namespace std;

int X, Y;

int solve_a(int idx, vector<int> &a, vector<int> &b);
int solve_b(int idx, vector<int> &a, vector<int> &b);

int solve_b(int idx, vector<int> &a, vector<int> &b) {
	if (idx >= b.size()) return 0;
	auto it = lower_bound(begin(a), end(a), b[idx] + Y);
	return solve_a(it - begin(a), a, b) + 1;
}

int solve_a(int idx, vector<int> &a, vector<int> &b) {
	if (idx >= a.size()) return 0;
	auto it = lower_bound(begin(b), end(b), a[idx] + X);
	if (it == end(b)) return 0;
	return solve_b(it - begin(b), a, b) + 1;
}

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M >> X >> Y;

	vector<int> a(N);
	for (int i = 0; i < N; i++) cin >> a[i];

	vector<int> b(M);
	for (int i = 0; i < M; i++) cin >> b[i];

	cout << solve_a(0, a, b) / 2 << endl;

	return 0;
}