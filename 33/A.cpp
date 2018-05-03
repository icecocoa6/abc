#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;
	if (S[0] == S[1] && S[1] == S[2] && S[2] == S[3]) printf("SAME\n");
	else printf("DIFFERENT\n");
	return 0;
}