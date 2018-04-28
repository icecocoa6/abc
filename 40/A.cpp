#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int n, x;
	cin >> n >> x;
	cout << min(x - 1, n - x) << endl;
	return 0;
}
