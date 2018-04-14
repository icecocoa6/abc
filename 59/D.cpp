#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	long X, Y;
	cin >> X >> Y;
	if (abs(X - Y) <= 1) printf("Brown\n");
	else printf("Alice\n");
	return 0;
}