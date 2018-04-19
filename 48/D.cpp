#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;
	if (S.front() == S.back()) {
		int turn = S.size() - 3;
		if (turn % 2 == 0) printf("Second\n");
		else printf("First\n");
	} else {
		int turn = S.size() - 3;
		if (turn % 2 == 0) printf("First\n");
		else printf("Second\n");
	}
	return 0;
}