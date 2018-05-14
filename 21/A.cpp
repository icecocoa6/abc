#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	int ans = 0;
	if (N & 1) ans++;
	if (N & 2) ans++;
	if (N & 4) ans++;
	if (N & 8) ans++;
	cout << ans << endl;
	if (N & 1) cout << (N & 1) << endl;
	if (N & 2) cout << (N & 2) << endl;
	if (N & 4) cout << (N & 4) << endl;
	if (N & 8) cout << (N & 8) << endl;
	return 0;
}