#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C;
	cin >> A >> B >> C;
	int cnt[11] = {};
	cnt[A]++; cnt[B]++; cnt[C]++;
	if (cnt[5] == 2 && cnt[7] == 1) printf("YES\n");
	else printf("NO\n");
	return 0;
}