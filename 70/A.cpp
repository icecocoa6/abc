#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string N;
	cin >> N;
	if (N[0] == N[2]) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}