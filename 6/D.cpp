#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	vector<int> c(N);
	for (int i = 0; i < N; i++) cin >> c[i];

	vector<int> lis(N + 1, N + 1);

	for (int i = 0; i < N; i++)
		*lower_bound(begin(lis), end(lis), c[i]) = c[i];

	int len = lower_bound(begin(lis), end(lis), N + 1) - begin(lis);
	cout << N - len << endl;

	return 0;
}