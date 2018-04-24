#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int N, X;
	cin >> N >> X;
	vector<int> m(N);

	for (int i = 0; i < N; i++) cin >> m[i];

	sort(begin(m), end(m));

	int ans = N;
	for (int i = 0; i < N; i++) X -= m[i];

	ans += X / m[0];

	cout << ans << endl;

	return 0;
}