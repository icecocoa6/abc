#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int H, W;
	cin >> H >> W;
	vector<string> s(H);
	for (int i = 0; i < H; i++) cin >> s[i];

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (s[i][j] == '.') continue;
			if (i > 0 && s[i - 1][j] == '#') continue;
			if (i < H - 1 && s[i + 1][j] == '#') continue;
			if (j > 0 && s[i][j - 1] == '#') continue;
			if (j < W - 1 && s[i][j + 1] == '#') continue;

			printf("No\n");
			return 0;
		}
	}

	printf("Yes\n");
	return 0;
}