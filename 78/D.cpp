#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N, Z, W;
	vector<int> a;

	cin >> N >> Z >> W;

	for (int i = 0; i < N; i++) {
		int ai;
		cin >> ai;
		a.push_back(ai);
	}

	if (N == 1)
		cout << abs(a[0] - W) << endl;
	else
		cout << max(abs(a[N-2] - a[N-1]), abs(a[N-1] - W)) << endl;

	return 0;
}