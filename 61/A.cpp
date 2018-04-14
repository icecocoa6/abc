#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C;
	cin >> A >> B >> C;
	if (A <= C && C <= B) printf("Yes\n");
	else printf("No\n");
	return 0;
}