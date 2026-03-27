void merge(int A[], int p, int q, int r) {
    int n1 = q - p + 1; // จำนวนสมาชิกฝั่งซ้าย   
    int n2 = r - q;     // จำนวนสมาชิกฝั่งขวา 

    // สร้างอาร์เรย์ชั่วคราว L และ R 
    int L[n1 + 1], R[n2 + 1];

    // คัดลอกข้อมูลลงในอาร์เรย์ชั่วคราว 
    for (int i = 0; i < n1; i++) L[i] = A[p + i];
    for (int j = 0; j < n2; j++) R[j] = A[q + 1 + j];

    // ใส่ค่า Infinity ไว้ที่ท้ายอาร์เรย์เพื่อใช้เป็นตัวสิ้นสุด (Sentinel) 
    L[n1] = 2147483647; // สมมติว่าเป็นค่าสูงสุดของ int
    R[n2] = 2147483647;

    int i = 0, j = 0;
    // วนลูปเพื่อเลือกตัวที่น้อยที่สุดจาก L และ R กลับลงไปใน A 
    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int A[], int p, int r) {
    if (p < r) {
        // 1. Divide: หาจุดกึ่งกลาง 
        int q = (p + r) / 2;

        // 2. Conquer: สั่งเรียงข้อมูลฝั่งซ้ายและขวา (Recursive) 
        mergeSort(A, p, q);
        mergeSort(A, q + 1, r);

        // 3. Combine: นำข้อมูลที่เรียงแล้วทั้งสองฝั่งมารวมกัน
        merge(A, p, q, r);
    }
}