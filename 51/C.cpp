#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int sx, sy, tx, ty;
	cin >> sx >> sy >> tx >> ty;

	for (int i = sx; i < tx; i++) printf("R");
	for (int i = sy; i < ty; i++) printf("U");
	for (int i = tx; i > sx; i--) printf("L");
	for (int i = ty; i > sy; i--) printf("D");
	printf("D");

	for (int i = sx; i < tx + 1; i++) printf("R");
	for (int i = sy - 1; i < ty; i++) printf("U");
	printf("L");
	printf("U");
	for (int i = tx; i > sx - 1; i--) printf("L");
	for (int i = ty + 1; i > sy; i--) printf("D");
	printf("R\n");

	return 0;
}