#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(begin(a), end(a));
	cout << a[1] << endl;
	return 0;
}