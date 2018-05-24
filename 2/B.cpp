#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string W;
	cin >> W;
	for (auto c : W) {
		if ("aiueo"s.find(c) != string::npos) continue;
		cout << c;
	}
	cout << endl;
	return 0;
}