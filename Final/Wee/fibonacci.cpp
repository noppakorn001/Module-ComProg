// find fibonacci number at n with divide and conquer

#include <iostream>
using namespace std;

// divide and conquer
int fib(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  return fib(n - 1) + fib(n - 2);
}

// dynamic programming
int fib_dp(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  int dp[n + 1];
  dp[0] = 0;
  dp[1] = 1;
  for (int i = 2; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  return dp[n];
}

int main() {
  int n;
  cin >> n;
  cout << fib(n) << endl;
  cout << "divide and conquer" << endl;
  cout << fib_dp(n) << endl;
  cout << "dynamic programming" << endl;
  return 0;
}