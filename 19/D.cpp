#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	int u, v;
	u = 1;

	int max = 0;
	for (int i = 2; i <= N; i++) {
		cout << "? " << u << " " << i << endl;
		int dist;
		cin >> dist;
		if (max < dist) {
			v = i;
			max = dist;
		}
	}

	max = 0;
	for (int i = 1; i <= N; i++) {
		if (i == v) continue;
		cout << "? " << i << " " << v << endl;
		int dist;
		cin >> dist;
		if (max < dist) {
			u = i;
			max = dist;
		}
	}

	int ans = 0;
	cout << "? " << u << " " << v << endl;
	cin >> ans;
	cout << "! " << ans << endl;

	return 0;
}