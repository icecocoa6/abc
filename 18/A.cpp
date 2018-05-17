#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C;
	cin >> A >> B >> C;
	
	int r = 1;
	if (A < B) r++;
	if (A < C) r++;
	cout << r << endl;

	r = 1;
	if (B < A) r++;
	if (B < C) r++;
	cout << r << endl;

	r = 1;
	if (C < A) r++;
	if (C < B) r++;
	cout << r << endl;
	return 0;
}