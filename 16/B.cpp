#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C;
	cin >> A >> B >> C;
	int ans = 0;
	if (A == C - B) ans |= 1;
	if (A == C + B) ans |= 2;
	if (ans == 0) printf("!\n");
	else if (ans == 1) printf("+\n");
	else if (ans == 2) printf("-\n");
	else if (ans == 3) printf("?\n");
	return 0;
}