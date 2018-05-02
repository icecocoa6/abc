#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int W, H;
	cin >> W >> H;
	if (3 * W == 4 * H) printf("4:3\n");
	else printf("16:9\n");
	return 0;
}