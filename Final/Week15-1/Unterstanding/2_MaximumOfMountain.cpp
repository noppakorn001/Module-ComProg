/*
เขียนโปรแกรมเพื่อหาจุดสูงสุดของภูเขา โดยประยุกต์ใช้ Binary Search

ตัวอย่าง 1: 
    input: 1369210
    output: 4
ตัวอย่าง 2:
    input: 268321
    output: 3

h diagram;
  *
 / \
/   \

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string h;
    cout << "Enter high of mountain : ";
    cin >> h;

    int low = 0;
    int high = h.size()-1;

    int max;

    // Binary Serach
    while (low<=high)
    {
        int mid = (low+(high-low))/2;
        //max = mid;
        if (h[mid]==h[low] || h[high]) {
            max = mid;
            break;
        }
        else if  (h[mid]>h[mid-1]) {
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }

    cout << "Location of max altitude : "<<max+1 << endl;
    return 0;

}