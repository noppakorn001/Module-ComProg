// p[]: array ของความน่าจะเป็น (probabilities) ขนาด n
// n: จำนวนคีย์ทั้งหมด

void OptimalBST_DP(double p[], int n) {
    // 1. เตรียมตาราง: c เก็บต้นทุน, r เก็บราก, pp เก็บผลรวมความถี่สะสม
    double c[n + 2][n + 2];
    int r[n + 1][n + 1];
    double pp[n + 1][n + 1];

    // 2. คำนวณตารางความถี่สะสม pp[i, j] 
    for (int i = 1; i <= n; i++) {
        pp[i][i] = p[i-1]; // p index เริ่มที่ 0
        for (int j = i + 1; j <= n; j++) {
            pp[i][j] = pp[i][j - 1] + p[j-1];
        }
    }

    // 3. กำหนดค่าเริ่มต้น (Base Cases) 
    for (int i = 1; i <= n + 1; i++) {
        c[i][i - 1] = 0; // กรณีไม่มีโหนด
    }

    // 4. เริ่ม Loop ตามความยาวของช่วง k (Chain Length)
    for (int k = 1; k <= n; k++) {
        // i คือจุดเริ่มต้นของช่วง [cite: 304]
        for (int i = 1; i <= n - k + 1; i++) {
            int j = i + k - 1; // j คือจุดสิ้นสุดของช่วง 
            c[i][j] = 1e9; // กำหนดค่า Infinity 

            // 5. ลองเลือกโหนด m ตั้งแต่ i ถึง j มาเป็นราก (Root) 
            for (int m = i; m <= j; m++) {
                double newCost = c[i][m - 1] + c[m + 1][j] + pp[i][j]; 
                
                if (newCost < c[i][j]) { 
                    c[i][j] = newCost; // เก็บค่าใช้จ่ายที่ต่ำที่สุด 
                    r[i][j] = m;       // บันทึกรากที่เลือก 
                }
            }
        }
    }
    // ผลลัพธ์สุดท้าย (Minimum Cost) จะอยู่ที่ c[1][n]
}