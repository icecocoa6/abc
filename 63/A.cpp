#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B;
	cin >> A >> B;
	if (A + B >= 10) printf("error\n");
	else cout << A + B << endl;
	return 0;
}