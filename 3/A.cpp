#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	int salary = 0;
	for (int i = 1; i <= N; i++) salary += i * 10000;
	salary /= N;
	cout << salary << endl;

	return 0;
}