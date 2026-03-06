// 6810210158 Noppakorn Wunnoy
// Greedy Algorithm : Fractional Knapsack Problem

#include <iomanip>
#include <iostream>
using namespace std;

double fractionalKnapsack(int n, int capacity, int weight[], int value[]) {
  double total_value = 0;

  // sorting
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      // ผมเอาชัวร์ว่ามันจะ compare กันแบบ float เลข *1.0
      if ((1.0 * value[i]) / weight[i] < (1.0 * value[j]) / weight[j]) {
        swap(value[i], value[j]);
        swap(weight[i], weight[j]);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (capacity >= weight[i]) {
      capacity -= weight[i];
      total_value += value[i];
    } else {
      total_value += value[i] * capacity / weight[i];
      break;
    }
  }
  return total_value;
}

int main() {

  int n, capacity;
  cout << "Enter number of items: ";
  cin >> n;

  int weight[n], value[n];
  cout << "Enter weight and value of each item:\n ";
  for (int i = 0; i < n; i++) {
    cin >> weight[i] >> value[i];
  }

  cout << "Enter knapsack capacity: ";
  cin >> capacity;

  std::cout << std::fixed << std::setprecision(2);

  double maxValue = fractionalKnapsack(n, capacity, weight, value);
  cout << "Maximum value in knapsack = " << maxValue << endl;
}