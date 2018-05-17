#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin >> n;

	vector<int> colors(1000002);
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		colors[a] += 1;
		colors[b + 1] -= 1;
	}

	for (int i = 0; i < 1000002; i++)
		colors[i] += colors[i - 1];

	cout << *max_element(begin(colors), end(colors)) << endl;

	return 0;
}