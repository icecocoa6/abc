#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	if (N < 60) printf("Bad\n");
	else if (N < 90) printf("Good\n");
	else if (N < 100) printf("Great\n");
	else printf("Perfect\n");
	return 0;
}