#include <iostream>
#include <vector>

using namespace std;

int A, B, C, D, E, F;

int main(int argc, char *argv[]) {
	cin >> A >> B >> C >> D >> E >> F;

	vector<int> water;
	vector<int> sugar;

	for (int i = 0; 100 * A * i < F; i++) {
		for (int j = 0; 100 * A * i + 100 * B * j < F; j++) {
			int w = 100 * A * i + 100 * B * j;
			if (w > 0) water.push_back(w);
		}
	}

	for (int i = 0; C * i < F; i++) {
		for (int j = 0; C * i + D * j < F; j++) {
			int s = C * i + D * j;
			sugar.push_back(s);
		}
	}

	double d_max = -1.0;
	int ans_w = 0, ans_s = 0;
	for (int i = 0; i < water.size(); i++) {
		for (int j = 0; j < sugar.size(); j++) {
			int w = water[i], s = sugar[j];
			double d = 100.0 * s / (w + s);
			if (w * E < 100 * s) continue;
			if (w + s > F) continue;
			if (d_max < d) {
				ans_w = w; ans_s = s;
				d_max = d;
			}
		}
	}

	cout << ans_w + ans_s << " " << ans_s << endl;

	return 0;
}