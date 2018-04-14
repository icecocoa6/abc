#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, X;
	cin >> A >> B >> X;
	if (A <= X && X <= A + B) printf("YES\n");
	else printf("NO\n");
	return 0;
}