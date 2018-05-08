#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A;
	cin >> A;

	int ans = 0;
	for (int x = 1; x <= A / 2; x++) {
		ans = max(ans, x * (A - x));
	}
	cout << ans << endl;
	return 0;
}