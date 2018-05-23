#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string S, T;
	cin >> S >> T;

	for (int i = 0; i < S.size(); i++) {
		if (S[i] == '@' && "atcoder@"s.find(T[i]) != string::npos) continue;
		if (T[i] == '@' && "atcoder@"s.find(S[i]) != string::npos) continue;
		if (S[i] != T[i]) {
			printf("You will lose\n");
			return 0;
		}
	}

	printf("You can win\n");

	return 0;
}