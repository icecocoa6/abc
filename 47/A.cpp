#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int x[3];
	cin >> x[0] >> x[1] >> x[2];
	sort(begin(x), end(x));
	if (x[0] + x[1] == x[2]) printf("Yes\n");
	else printf("No\n");
	return 0;
}