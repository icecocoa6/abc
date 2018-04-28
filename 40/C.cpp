#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<int> a(N);
	vector<int> cost(N);

	for (int i = 0; i < N; i++) cin >> a[i];

	cost[1] = abs(a[1] - a[0]);
	for (int i = 2; i < N; i++) {
		cost[i] = min(abs(a[i] - a[i-1]) + cost[i-1], abs(a[i] - a[i-2]) + cost[i-2]);
	}

	cout << cost.back() << endl;
}