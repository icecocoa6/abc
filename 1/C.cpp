#include <iostream>
#include <cmath>

using namespace std;

int wind_power(int dis) {
	int p = dis * 100;
	if (p <= 60 *   24) return 0;
	if (p <= 60 *  154) return 1;
	if (p <= 60 *  334) return 2;
	if (p <= 60 *  544) return 3;
	if (p <= 60 *  794) return 4;
	if (p <= 60 * 1074) return 5;
	if (p <= 60 * 1384) return 6;
	if (p <= 60 * 1714) return 7;
	if (p <= 60 * 2074) return 8;
	if (p <= 60 * 2444) return 9;
	if (p <= 60 * 2844) return 10;
	if (p <= 60 * 3264) return 11;
	return 12;
}

int main(int argc, char *argv[]) {
	string DIR[] = {
		"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE",
		"S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"
	};
	int deg, dis;
	cin >> deg >> dis;

	int p = wind_power(dis);
	int d = ((10 * deg / 225) + 5) / 10;
	if (p == 0) printf("C 0\n");
	else cout << DIR[d % 16] << " " << p << endl;
}