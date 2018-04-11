#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C;
	cin >> A >> B >> C;

	vector<bool> remainder(B);
	for (int i = 1; i < B; i++) {
		remainder[(A * i) % B] = true;
	}

	if (remainder[C]) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}