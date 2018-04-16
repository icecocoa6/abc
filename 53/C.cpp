#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	long x;
	cin >> x;
	long ans = (x / 11) * 2;
	if (x % 11 > 0) ans++;
	if (x % 11 > 6) ans++;
	cout << ans << endl;
	return 0;
}
