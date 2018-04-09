#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	cout << (min(A, B) + min(C, D)) << endl;
	return 0;
}
