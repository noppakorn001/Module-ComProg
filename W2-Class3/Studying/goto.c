#include <stdio.h>

int main() {
    float r = 1;
    float area;
    const float PI = 3.14159; 

loop1: 
    area = PI * r * r; 
    printf("R = %.2f Area = %.4f \n", r, area);
    
    if (area >= 100) {
        printf("Area reaches 10.0 or more. Stopping the loop.\n");
        return 0; 
    }
    
    // เพิ่มค่า r เพื่อคำนวณรอบถัดไป
    r++;
    
    // วนกลับไปที่ loop1
    goto loop1; 

}