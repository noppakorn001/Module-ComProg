// Prefix (Pi) 
void computePrefixFunction(string P, int pi[]) {
    int m = P.length();
    pi[0] = 0; // pi[1] = 0 เสมอ 
    int k = 0; 

    for (int q = 1; q < m; q++) { // q เริ่มจาก 2 ถึง m 
        while (k > 0 && P[k] != P[q]) { // mismatch 
            k = pi[k - 1]; // k = pi[k] 
        }
        if (P[k] == P[q]) { // match 
            k++;
        }
        pi[q] = k; // บันทึกค่าลงตาราง pi 
    }
}

// KMP 
void KMPSearch(string T, string P) {
    int n = T.length();
    int m = P.length();
    int pi[m];
    
    computePrefixFunction(P, pi); 
    
    int q = 0; // จำนวนตัวอักษรที่ match ได้ในขณะนั้น
    // วนลูปเช็ค Text จากซ้ายไปขวา  
    for (int i = 0; i < n; i++) { 
        
        // เมื่อเกิด Mismatch: ใช้ตาราง pi เพื่อเลื่อน pattern 
        while (q > 0 && P[q] != T[i]) {
            q = pi[q - 1]; 
        }
        
        // เมื่อเกิด Match: เพิ่มจำนวนตัวที่ match 
        if (P[q] == T[i]) {
            q++;
        }
        
        // พบ Pattern ครบทั้งชุด 
        if (q == m) {
            cout << "พบ Match ที่ index: " << (i - m + 1) << endl; 
            q = pi[q - 1]; // เตรียมหา match ถัดไป 
    }
}