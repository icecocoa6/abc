#include <iostream> 
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string A, B;
	cin >> A >> B;
	if (A.size() > B.size()) printf("GREATER\n");
	else if (A.size() < B.size()) printf("LESS\n");
	else if (A > B) printf("GREATER\n");
	else if (A == B) printf("EQUAL\n");
	else printf("LESS\n");
	return 0;
}