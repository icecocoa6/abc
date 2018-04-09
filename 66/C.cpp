#include <iostream> 
#include <list>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	list<int> b;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		if (i % 2 == 0) b.push_back(a);
		else b.push_front(a);
	}

	if (N % 2 != 0) b.reverse();

	for (auto i : b) printf("%d ", i);
	printf("\n");

	return 0;
}