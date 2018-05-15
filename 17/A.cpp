#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int ans = 0;
	for (int i = 0; i < 3; i++) {
		int s, e;
		cin >> s >> e;
		ans += s * e / 10;
	}
	cout << ans << endl;
	return 0;
}