#include <iostream>

using  namespace std;

int main(int argc, char *argv[]) {
	string S1, S2;
	cin >> S1 >> S2;
	if ((S1[0] == 'H') ^ (S2[0] == 'H')) printf("D\n");
	else printf("H\n");
	return 0;
}