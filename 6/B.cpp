#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin >> n;

	vector<int> tri(n+1);
	tri[0] = 0;
	tri[1] = 0;
	tri[2] = 0;
	tri[3] = 1;
	for (int i = 4; i <= n; i++)
		tri[i] = (tri[i - 1] + tri[i - 2] + tri[i - 3]) % 10007;

	cout << tri[n] << endl;

	return 0;
}