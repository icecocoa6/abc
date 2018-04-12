#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int a, b, c;
	cin >> a >> b >> c;
	if (b - a == c - b) printf("YES\n");
	else printf("NO\n");
	return 0;
}