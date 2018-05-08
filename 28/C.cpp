#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C, D, E;
	cin >> A >> B >> C >> D >> E;

	int sum[10];
	sum[0] = A + B + C;
	sum[1] = A + B + D;
	sum[2] = A + B + E;
	sum[3] = A + C + D;
	sum[4] = A + C + E;
	sum[5] = A + D + E;
	sum[6] = B + C + D;
	sum[7] = B + C + E;
	sum[8] = B + D + E;
	sum[9] = C + D + E;

	sort(begin(sum), end(sum), greater<int>());
	unique(begin(sum), end(sum));

	cout << sum[2] << endl;

	return 0;
}