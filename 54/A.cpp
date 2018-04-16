#include <iostream> 

using namespace std;

int main(int argc, char *argv[]) {
	int A, B;
	cin >> A >> B;

	if (A == 1) A = 14;
	if (B == 1) B = 14;
	if (A < B) printf("Bob\n");
	else if (A > B) printf("Alice\n");
	else printf("Draw\n");
	return 0;
}