#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C;
	cin >> A >> B >> C;
	cout << C / min(A, B) << endl;
	return 0;
}