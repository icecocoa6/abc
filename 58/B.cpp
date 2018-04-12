#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string O, E;

	cin >> O >> E;
	for (int i = 0; i < E.size(); i++) {
		cout << O[i] << E[i];
	}
	if (E.size() < O.size()) cout << O.back();
	cout << endl;

	return 0;
}