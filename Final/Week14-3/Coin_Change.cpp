// 6810210158 Noppakorn Wunnoy

#include <iostream>

using namespace std;

// Greedy Algorithm : Coin Change Problem
int coinChange(int coins[], int n, int amount) {
  int total_coin = 0;
  for (int i = 0; i < n; i++) {
    if (amount >= coins[i]) {
      int count = amount / coins[i];
      amount %= coins[i];
      total_coin += count;
      cout << coins[i] << ": " << count << endl;
    }
  }
  return total_coin;
}

int main() {
  int coins[] = {10, 5, 2, 1};
  int n = sizeof(coins) / sizeof(coins[0]);
  int amount;
  cout << "Enter amount: ";
  cin >> amount;

  coinChange(coins, n, amount);

  return 0;
}
