#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int M, D;
	cin >> M >> D;
	if (M % D) printf("NO\n");
	else printf("YES\n");
	return 0;
}