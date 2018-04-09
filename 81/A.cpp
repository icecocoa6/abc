#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	char a, b, c;
	cin >> a >> b >> c;
	int cnt = 0;
	if (a == '1') cnt++;
	if (b == '1') cnt++;
	if (c == '1') cnt++;
	cout << cnt << endl;
	return 0;
}