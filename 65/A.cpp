#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int X, A, B;
	cin >> X >> A >> B;
	if (B <= A) printf("delicious\n");
	else if (B <= A + X) printf("safe\n");
	else printf("dangerous\n");
	return 0;
}