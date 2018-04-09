#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	vector<int> a(100002);

	for (int i = 0; i < N; i++) {
		int ai;
		cin >> ai;
		a[ai]++; a[ai+1]++; a[ai+2]++;
	}

	int ans = 0;
	for (int i = 0; i < a.size(); i++) {
		ans = max(ans, a[i]);
	}

	cout << ans << endl;
	return 0;
}