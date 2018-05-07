#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	if (B * C == D * A) printf("DRAW\n");
	else if (B * C < D * A) printf("AOKI\n");
	else printf("TAKAHASHI\n");
	return 0;
}