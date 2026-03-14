/*
เขียนโปรแกรม Binary Search (แบบวนลูป ไม่ใช่ recursive call)

input: ตัวเลข n จำนวน ที่เรียงลำดับแล้ว และค่าที่ต้องการค้นหา
output: ตำแหน่งของค่าที่ต้องการค้นหา
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {


    int n;
    cout << "Input capacity :" ;
    cin >> n;
    vector<int> num(n);
    for (int i=0;i<n;i++) {
        cout << "Enter Value " << i+1 << " : " ;
        cin >> num[i];
    }

    int low = 0;
    int high = num.size()-1;

    int key;
    cout << "Enter Key : ";
    cin >> key;

    int location;

    while(low<=high) {
        int mid = (low+(high-low))/2;
        if (num[mid]==key) {
            location = mid;
            break;
        }
        else if (num[low]==key) {
            location =low;
            break;
        }
        else if (num[high]==key) {
            location =high;
            break;
        }
        else if (num[mid]<key) {
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }

    cout << "Location of Key : " <<location+1 << endl;

    return 0;

}