#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int a, b, c;
	cin >> a >> b >> c;
	int ans = min(a + b, min(b + c, c + a));
	cout << ans << endl;
	return 0;
}