#include <iostream>
#include <list>
#include <functional>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	list<int> d;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		d.push_back(n);
	}

	d.sort();
	d.unique();

	cout << d.size() << endl;

	return 0;
}