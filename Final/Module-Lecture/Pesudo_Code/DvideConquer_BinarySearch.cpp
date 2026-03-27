int binarySearchRecursive(int A[], int left, int right, int x) {
    // 1. Base Case: ถ้าขอบซ้ายสวนทางกับขอบขวา แสดงว่าหาไม่เจอ
    if (left > right) return -1; 

    // 2. หาจุดกึ่งกลาง (Midpoint)
    int m = (left + right) / 2; 

    // 3. ตรวจสอบเงื่อนไข
    if (x == A[m]) return m; // เจอแล้ว! คืนค่าตำแหน่ง 

    if (x < A[m]) {
        // ค้นหาต่อในฝั่งซ้าย (ตัดฝั่งขวาทิ้ง) 
        return binarySearchRecursive(A, left, m - 1, x);
    } else {
        // ค้นหาต่อในฝั่งขวา (ตัดฝั่งซ้ายทิ้ง) 
        return binarySearchRecursive(A, m + 1, right, x);
    }
}

int binarySearchIterative(int A[], int n, int x) {
    int left = 0;
    int right = n - 1;

    // วนลูปตราบเท่าที่ช่วงการค้นหายังไม่หมดไป
    while (left <= right) {
        // คำนวณหาจุดกึ่งกลางในแต่ละรอบ
        int m = left + (right - left) / 2; 

        // กรณีที่ 1: เจอข้อมูลที่ต้องการ
        if (A[m] == x) {
            return m; 
        }

        // กรณีที่ 2: ค่าที่หาน้อยกว่าค่ากลาง ให้เลื่อนขอบขวามา
        if (x < A[m]) {
            right = m - 1; 
        } 
        // กรณีที่ 3: ค่าที่หามากกว่าค่ากลาง ให้เลื่อนขอบซ้ายไป
        else {
            left = m + 1; 
        }
    }

    // ถ้าหลุดลูปออกมาได้แสดงว่าหาไม่เจอ
    return -1; 
}