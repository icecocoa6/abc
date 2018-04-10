#include <iostream>

using namespace std;

int group(int x) {
	if (x == 2) return 0;
	if (x == 4 || x == 6 || x == 9 || x == 11) return 1;
	return 2;
}

int main(int argc, char *argv[]) {
	int x, y;
	cin >> x >> y;
	if (group(x) == group(y)) printf("Yes\n");
	else printf("No\n");
	return 0;
}