// // 6810210158
// Dynamic Programming 0/1

#include <iostream>
#include <vector>
using namespace std;

void knapsack(int n, int W, int w[], int v[]) {
  vector<vector<int>> b(n + 1, vector<int>(W + 1, 0));

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= W; j++) {
      if (w[i - 1] <= j) {
        b[i][j] = max(b[i - 1][j], b[i - 1][j - w[i - 1]] + v[i - 1]);
      } else {
        b[i][j] = b[i - 1][j];
      }
    }
  }

  // trace back
  vector<int> selectedItems;
  int currentW = W;
  int totalWeight = 0;
  for (int i = n; i > 0; i--) {
    if (b[i][currentW] != b[i - 1][currentW]) {
      selectedItems.push_back(i);
      totalWeight += w[i - 1];
      currentW -= w[i - 1];
    }
  }
  cout << "Selected items: ";
  for (int i = 0; i < selectedItems.size(); i++) {
    cout << selectedItems[i] << " ";
  }
  cout << endl;
  cout << "Maximum weight = " << totalWeight << endl;
  cout << "Maximum value = " << b[n][W] << endl;
}

int main() {
  int n, W;
  cin >> n >> W;

  int w[n], v[n];
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  knapsack(n, W, w, v);
  return 0;
}