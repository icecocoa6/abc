#include <iostream>

using namespace std;

bool isprime[100001];
int like_2017_acc[100001];

int main(int argc, char *argv[]) {
	for (int i = 2; i < 100001; i++)
		isprime[i] = true;
	for (int i = 2; i < 317 /* sqrt(100001) */; i++)
		for (int j = i + i; j < 100001; j += i)
			isprime[j] = false;
	
	for (int i = 3; i < 100001; i += 2) {
		if (isprime[i] && isprime[(i + 1) / 2])
			like_2017_acc[i] = 1;
	}

	for (int i = 1; i < 100001; i++)
		like_2017_acc[i] += like_2017_acc[i - 1];

	int Q;
	cin >> Q;
	for (int i = 0; i < Q; i++) {
		int li, ri;
		cin >> li >> ri;
		cout << like_2017_acc[ri] - like_2017_acc[li - 1] << endl;
	}

	return 0;
}