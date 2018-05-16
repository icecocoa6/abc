#include <iostream>

using namespace std;

long N, H;
long A, B, C, D, E;

int main(int argc, char *argv[]) {
  cin >> N >> H >> A >> B >> C >> D >> E;

  long ans = C * N;
  for (int i = 0; i <= N; i++) {
    long rest = (N - i) * E - H - B * i;
    long j;
    if (rest < 0) j = 0;
    else j = rest / (D + E) + 1;
    if (B * j != rest)
      ans = min(ans, A * i + C * j);
  }

  cout << ans << endl;
  return 0;
}