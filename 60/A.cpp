#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string A, B, C;
	cin >> A >> B >> C;
	if (A.back() == B.front() && B.back() == C.front()) printf("YES\n");
	else printf("NO\n");
	return 0;
}