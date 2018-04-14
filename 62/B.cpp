#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int H, W;
	cin >> H >> W;

	for (int i = 0; i < W + 2; i++) printf("#");
	printf("\n");
	for (int i = 0; i < H; i++) {
		string S;
		cin >> S;
		cout << '#' << S << '#' << endl;
	}
	for (int i = 0; i < W + 2; i++) printf("#");
	printf("\n");
	return 0;
}