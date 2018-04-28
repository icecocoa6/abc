#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;
	if (S.back() == 'T') printf("YES\n");
	else printf("NO\n");
	return 0;
}