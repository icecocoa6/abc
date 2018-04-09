#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int N, K;
	cin >> N >> K;

	vector<int> l(N);
	for (int i = 0; i < N; i++) cin >> l[i];

	sort(begin(l), end(l), greater<int>());

	int ans = 0;
	for (int i = 0; i < K; i++) ans += l[i];

	cout << ans << endl;
	return 0;
}