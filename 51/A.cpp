#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;
	for (int i = 0; i < 5; i++) cout << S[i];
	cout << " ";
	for (int i = 0; i < 7; i++) cout << S[i+6];
	cout << " ";
	for (int i = 0; i < 5; i++) cout << S[i+14];
	cout << endl;
	return 0;
}