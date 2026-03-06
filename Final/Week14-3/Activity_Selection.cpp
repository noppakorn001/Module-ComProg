// 6810210158 Noppakorn Wunnoy
// Greedy Algorithm : Activity Selection Problem

#include <algorithm>
#include <iostream>

using namespace std;

void activitySelection(int n, int start[], int finish[], int id[]) {

  // sort activity by finish time
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (finish[i] > finish[j]) {
        swap(finish[i], finish[j]);
        swap(start[i], start[j]);
        swap(id[i], id[j]); // ทำเพิ่มมาไม่ให้เลข activity มั่ว
      }
    }
  }

  cout << "Selected Activities: " << endl;

  int i = 0;
  cout << "Activity " << id[i] << " (Start: " << start[i]
       << ", Finish: " << finish[i] << ")" << endl;

  for (int j = 1; j < n; j++) {
    if (start[j] >= finish[i]) {
      cout << "Activity " << id[j] << " (Start: " << start[j]
           << ", Finish: " << finish[j] << ")" << endl;
      i = j;
    }
  }
}

int main() {
  int n;
  cout << "Enter number of activities:" << endl;
  cin >> n;

  int start[n], finish[n], id[n];
  cout << "Enter start and finish timen:\n " << endl;
  for (int i = 0; i < n; i++) {
    id[i] = i + 1;
    cin >> start[i] >> finish[i];
  }

  activitySelection(n, start, finish, id);

  return 0;
}
