#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  int N, M, D;
  cin >> N >> M >> D;

  vector<int> A(M);
  for (int i = 0; i < M; i++) {
    cin >> A[i];
    A[i]--;
  }

  vector<int> G(N);
  for (int i = 0; i < N; i++)
    G[i] = i;

  for (int i = 0; i < M; i++) {
    swap(G[A[i]], G[A[i] + 1]);
  }

  vector<int> G_(N);
  for (int i = 0; i < N; i++) {
    G_[G[i]] = i;
  }
  G = G_;

  vector<bool> visited(N);
  vector<pair<int, int>> group(N);
  vector<vector<int>> lists;
  for (int i = 0; i < N; i++) {
    if (visited[i])
      continue;

    int m = 0;
    int j = i;
    vector<int> l;
    while (!visited[j]) {
      visited[j] = true;
      l.push_back(j);
      group[j] = {lists.size(), m};
      m += 1;
      j = G[j];
    }
    lists.push_back(l);
  }

  for (int i = 0; i < N; i++) {
    auto &l = lists[group[i].first];
    cout << l[(D + group[i].second) % l.size()] + 1 << endl;
  }

  return 0;
}