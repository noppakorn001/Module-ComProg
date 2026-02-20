#include <algorithm>
#include <climits>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

// random data
void randomData(int data[], int n) {
  for (int i = 1; i <= n; i++) {
    data[i] = rand() % 100000;
  }
}

// Bubble Sort
void BubbleSort(int data[], int n) {
  int swapped = 1;
  while (swapped == 1) {
    swapped = 0;
    for (int i = 1; i <= n - 1; i++) {
      if (data[i] > data[i + 1]) {
        int tmp = data[i];
        data[i] = data[i + 1];
        data[i + 1] = tmp;
        swapped = 1;
      }
    }
  }
}

// Selection Sort
void SelectionSort(int data[], int n) {
  for (int i = 1; i <= n; i++) {
    int tmp = data[i];
    int k = i;
    for (int j = i + 1; j <= n; j++) {
      if (data[j] < tmp) {
        k = j;
        tmp = data[j];
      }
    }
    tmp = data[i];
    data[i] = data[k];
    data[k] = tmp;
  }
}

// Insertion Sort
void InsertionSort(int data[], int n) {
  for (int i = 2; i <= n; i++) {
    int tmp = data[i];
    int j = i;
    while (j > 1 && data[j - 1] > tmp) {
      data[j] = data[j - 1];
      j = j - 1;
    }
    data[j] = tmp;
  }
}

// Shell Sort
void ShellSort(int data[], int n) {
  for (int gap = n / 2; gap > 0; gap /= 2) {
    for (int i = gap + 1; i <= n; i++) {
      int j = i;
      int tmp = data[j];
      while (j > gap && data[j - gap] > tmp) {
        data[j] = data[j - gap];
        j = j - gap;
      }
      data[j] = tmp;
    }
  }
}

// merge sort
void merge(int data[], int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;

  int *L = new int[n1 + 2];
  int *R = new int[n2 + 2];

  for (int i = 1; i <= n1; i++)
    L[i] = data[p + i - 1];
  for (int j = 1; j <= n2; j++)
    R[j] = data[q + j];

  L[n1 + 1] = INT_MAX;
  R[n2 + 1] = INT_MAX;

  int i = 1, j = 1;
  for (int k = p; k <= r; k++) {
    if (L[i] <= R[j]) {
      data[k] = L[i];
      i++;
    } else {
      data[k] = R[j];
      j++;
    }
  }

  delete[] L;
  delete[] R;
}

void mergeSort(int data[], int p, int r) {
  if (p < r) {
    int q = (p + r) / 2;
    mergeSort(data, p, q);
    mergeSort(data, q + 1, r);
    merge(data, p, q, r);
  }
}

// quick sort
int partition(int data[], int p, int r) {
  int c = data[p];
  int i = p - 1;
  int j = r + 1;
  while (i < j) {
    do {
      i++;
    } while (data[i] < c);
    do {
      j--;
    } while (data[j] > c);
    if (i < j) {
      int tmp = data[i];
      data[i] = data[j];
      data[j] = tmp;
    }
  }
  return j;
}
void quickSort(int data[], int p, int r) {
  if (p < r) {
    int q = partition(data, p, r);
    quickSort(data, p, q);
    quickSort(data, q + 1, r);
  }
}

int main() {
  srand(time(0));
  int n_size[] = {1000, 5000, 10000, 20000, 50000};
  string algo_names[] = {"Bubble", "Selection", "Insertion",
                         "Shell",  "Merge",     "Quick"};

  for (int i = 0; i < 5; i++) {
    int n = n_size[i];
    cout << "---------------------------------" << endl;
    cout << "n = " << n << endl;
    cout << "---------------------------------" << endl;

    for (int a = 0; a < 6; a++) {
      cout << "algorithm = " << algo_names[a] << endl;
      double sum_time = 0;

      for (int r = 1; r <= 10; r++) {
        int *data = new int[n + 1];
        randomData(data, n);
        clock_t start = clock();

        if (a == 0)
          BubbleSort(data, n);
        else if (a == 1)
          SelectionSort(data, n);
        else if (a == 2)
          InsertionSort(data, n);
        else if (a == 3)
          ShellSort(data, n);
        else if (a == 4)
          mergeSort(data, 1, n);
        else if (a == 5)
          quickSort(data, 1, n);

        clock_t end = clock();
        double duration = (double)(end - start) / CLOCKS_PER_SEC;

        cout << "    round " << r << " : " << fixed << setprecision(6)
             << duration << " sec" << endl;

        sum_time += duration;
        delete[] data;
      }

      cout << "avg time = " << fixed << setprecision(6) << (sum_time / 10.0)
           << " sec" << endl;
      cout << endl;
    }
  }

  return 0;
}
