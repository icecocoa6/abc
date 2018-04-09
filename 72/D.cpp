#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	vector<int> a(N+1);
	for (int i = 1; i <= N; i++) cin >> a[i];

	int ans = 0;
	for (int i = 1; i <= N; i++) {
		if (i == a[i] && i + 1 == a[i+1]) {
			ans++;
			i++;
		} else if (i == a[i] && i + 1 != a[i+1]) {
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}