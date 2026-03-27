void preprocessBadChar(string pattern, int t[256]) {
    int m = pattern.length();
    // เริ่มต้นให้ทุกตัวอักษรเลื่อนเท่ากับความยาว pattern 
    for (int i = 0; i < 256; i++) 
        t[i] = m; 
    
    // กำหนดค่าการเลื่อนตามตำแหน่งตัวอักษรใน pattern (จากซ้ายไปขวา)
    for (int j = 0; j < m - 1; j++) 
        t[pattern[j]] = m - 1 - j;
}

void BoyerMooreSearch(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();
    
    int t[256]; // ตาราง Bad-symbol shift 
    int d2[m + 1]; // ตาราง Good-suffix shift
    
    // 1. Preprocessing: สร้างตาราง t(c) และ d2 
    preprocessBadChar(pattern, t);
    preprocessGoodSuffix(pattern, d2); 

    int i = 0; // ตำแหน่งเริ่มต้นของ pattern บน text
    while (i <= n - m) {
        int k = 0; // จำนวนตัวอักษรที่ match กัน 
        int j = m - 1; // เริ่มเทียบจากขวาไปซ้าย 

        // 2. Matching: เปรียบเทียบจากขวาไปซ้าย 
        while (j >= 0 && pattern[j] == text[i + j]) {
            j--;
            k++; // เพิ่มจำนวนตัวที่ match 
        }

        if (j < 0) {
            // กรณีพบ Pattern (Found match) 
            print("Match found at index: " + i);
            i += d2[m]; // เลื่อนตามค่า d2 สูงสุด
        } else {
            // กรณีเกิด Mismatch text ที่ไม่ตรง
            int d1 = max(1, t[c] - k); // คำนวณ Bad-character shift 
            
            int d;
            if (k == 0) {
                d = d1; // ถ้าไม่ตรงเลยใช้ d1 
                d = max(d1, d2[k]); // ถ้ามีตัวตรงบ้าง เลือกค่าที่มากที่สุด 
            }
            
            i += d; // เลื่อนตำแหน่ง pattern 
    }
}