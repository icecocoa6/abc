#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
	int X;
	cin >> X;
	
	int ans = 1;
	for (int i = 2; i < sqrt(X); i++)
		for (int j = i * i; j <= X; j *= i)
			ans = max(ans, j);

	cout << ans << endl;
	return 0;
}