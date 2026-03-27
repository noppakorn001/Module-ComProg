void selectionSort(int data[], int n) {
    // Outer loop: วนรอบทั้งหมด n-1 รอบ 
    for (int i = 0; i < n - 1; i++) {
        
        // 1. สมมติให้ตำแหน่งปัจจุบัน (i) คือค่าที่น้อยที่สุด (min_idx) 
        int min_idx = i;

// 2. Inner loop: ค้นหาตัวที่น้อยที่สุดจริงๆ ในส่วนที่เหลือ (i+1 ถึง n) 
        for (int j = i + 1; j < n; j++) {
            // ถ้าเจอตัวที่น้อยกว่าค่า min_idx ปัจจุบัน 
            if (data[j] < data[min_idx]) {
                min_idx = j; // เก็บตำแหน่งใหม่ที่น้อยกว่าไว้ 
            }
        }

        // 3. เมื่อเจอตัวที่น้อยที่สุดในรอบนั้นแล้ว จึงทำการ Swap 
        // การสลับจะเกิดขึ้นนอกลูปใน เพื่อReduce Swap
        if (min_idx != i) {
            int tmp = data[i];
            data[i] = data[min_idx];
            data[min_idx] = tmp;
        }
    }
}