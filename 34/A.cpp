#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int x, y;
	cin >> x >> y;
	if (x < y) printf("Better\n");
	else printf("Worse\n");
	return 0;
}