int partition(int A[], int p, int r) {
    int c = A[p];      // เลือกตัวแรกเป็น Pivot(c) 
    int i = p - 1;     // ตัวชี้ฝั่งซ้าย 
    int j = r + 1;     // ตัวชี้ฝั่งขวา 

    while (true) {
        // วิ่งตัวชี้ j จากขวามาซ้าย เพื่อหาตัวที่ <= Pivot 
        do {
            j--;
        } while (A[j] > c);

        // วิ่งตัวชี้ i จากซ้ายไปขวา เพื่อหาตัวที่ >= Pivot 
        do {
            i++;
        } while (A[i] < c);

        // ถ้าตัวชี้ยังไม่สวนกัน ให้สลับค่า 
        if (i < j) {
            int tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        } else {
        // ถ้าสวนกันแล้ว ให้คืนค่าตำแหน่ง j เพื่อใช้แบ่งกลุ่ม 
            return j;
        }
    }
}

void quickSort(int A[], int p, int r) {
// เงื่อนไขหยุด: ถ้าตำแหน่งเริ่มต้น(p) ยังน้อยกว่าตำแหน่งท้าย(r)
    if (p < r) {
        // 1. Partition: แบ่งข้อมูลและหาจุดแบ่ง (j) 
        int j = partition(A, p, r);

        // 2. Recursion: ทำซ้ำในฝั่งซ้าย (p ถึง j) 
        quickSort(A, p, j);

        // 3. Recursion: ทำซ้ำในฝั่งขวา (j+1 ถึง r) 
        quickSort(A, j + 1, r);
    }
}