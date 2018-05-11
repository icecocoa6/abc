#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <tuple>

using namespace std;

using star = pair<int, int>;

double farthest_distance2(pair<double, double> &pivot, vector<star> &stars) {
	double result = 0.0;
	for (auto &s : stars) {
		result = max(result, (s.first - pivot.first) * (s.first - pivot.first))
	}
}

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<star> A(N), B(N);
	for (int i = 0; i < N; i++)
		cin >> A[i].first >> A[i].second;
	for (int i = 0; i < N; i++)
		cin >> B[i].first >> B[i].second;

	pair<double, double> AG, BG;
	for (auto a : A) { AG.first += a.first; AG.second += a.second; }
	AG.first /= A.size(); AG.second /= A.size();
	for (auto b : B) { BG.first += b.first; BG.second += b.second; }
	BG.first /= B.size(); BG.second /= B.size();

	double far_distanceA, far_distanceB;
	for (auto a : A) 

	cout << fixed << setprecision(10) << P << endl;

	return 0;
}