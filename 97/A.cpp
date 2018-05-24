#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((abs(a - b) <= d && abs(b - c) <= d) || abs(a - c) <= d)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}
