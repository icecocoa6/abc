#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;

	string C = "WBWBWWBWBWBW";
	string D = "WBWWBWBWBWWB";
	string E = "WWBWBWBWWBWB";
	string F = "WBWBWBWWBWBW";
	string G = "WBWBWWBWBWWB";
	string A = "WBWWBWBWWBWB";
	string B = "WWBWBWWBWBWB";
	if (S.substr(0, 12) == C) printf("Do\n");
	if (S.substr(0, 12) == D) printf("Re\n");
	if (S.substr(0, 12) == E) printf("Mi\n");
	if (S.substr(0, 12) == F) printf("Fa\n");
	if (S.substr(0, 12) == G) printf("So\n");
	if (S.substr(0, 12) == A) printf("La\n");
	if (S.substr(0, 12) == B) printf("Si\n");
	return 0;
}