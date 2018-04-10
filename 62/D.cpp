#include <iostream>
#include <queue>
#include <limits>

using namespace std;

int main(int argc, char *argv[]) {
	int N;

	cin >> N;

	vector<int> mid(N);
	priority_queue<int, vector<int>, greater<int>> pos;
	priority_queue<int, vector<int>, greater<int>> neg;

	vector<long> pos_sum(N+1);
	vector<long> neg_sum(N+1);
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		pos.push(x);
		pos_sum[0] += x;
	}
	for (int i = 0; i < N; i++) {
		cin >> mid[i];
	}
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		neg.push(-x);
		neg_sum[N] -= x;
	}

	for (int i = 1; i <= N; i++) {
		pos.push(mid[i-1]);
		int x = pos.top();
		pos.pop();
		pos_sum[i] = pos_sum[i-1] + mid[i-1] - x;
	}

	for (int i = N - 1; i >= 0; i--) {
		neg.push(-mid[i]);
		int x = neg.top();
		neg.pop();
		neg_sum[i] = neg_sum[i+1] - mid[i] - x;
	}

	long ans = numeric_limits<long>::min();
	for (int i = 0; i <= N; i++) {
		ans = max(ans, pos_sum[i] + neg_sum[i]);
	}

	cout << ans << endl;

	return 0;
}