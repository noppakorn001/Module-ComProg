// 6810210158
// All-Pair Shortest Path

#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

const int INF = 1e9;

void print_path(int i, int j, const vector<vector<int>> &next) {
  cout << i;
  while (i != j) {
    i = next[i][j];
    cout << " > " << i;
  }
  // cout << endl;
}

void shortest(int n, vector<vector<int>> &d, vector<vector<int>> &next) {
  for (int k = 1; k <= n; k++) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        if (d[i][k] != INF && d[k][j] != INF) {
          if (d[i][j] > d[i][k] + d[k][j]) {
            d[i][j] = d[i][k] + d[k][j];
            next[i][j] = next[i][k];
          }
        }
      }
    }
  }
}

void matrix(int n, const vector<vector<int>> &d) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (d[i][j] == INF) {
        cout << "INF ";
      } else {
        cout << d[i][j] << " ";
      }
    }
    cout << endl;
  }
}

void path_example(int n, const vector<vector<int>> &d,
                  const vector<vector<int>> &next) {
  cout << "\nPath examples " << endl;

  for (int u = 1; u <= n; u++) {
    for (int v = 1; v <= n; v++) {
      if (u != v && d[u][v] != INF) {
        cout << u << " => " << v << ": ";
        print_path(u, v, next);
        cout << endl;
      }
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> d(n + 1, vector<int>(n + 1, INF));
  vector<vector<int>> next(n + 1, vector<int>(n + 1, -1));

  for (int i = 1; i <= n; i++)
    d[i][i] = 0;

  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    if (w < d[u][v]) {
      d[u][v] = d[v][u] = w;
      next[u][v] = v;
      next[v][u] = u;
    }
  }

  shortest(n, d, next);
  matrix(n, d);
  path_example(n, d, next);
}
