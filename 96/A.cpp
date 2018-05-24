#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int a, b;
	cin >> a >> b;
	int ans = 0;
	for (int m = 1, d = 1; (m < a) || (m == a && d <= b); m++, d++, ans++);
	cout << ans << endl;
	return 0;
}