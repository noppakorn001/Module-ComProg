// โครงสร้างข้อมูลสำหรับสิ่งของ
struct Item {
    int value;
    int weight;
    double density;
    // ค่า v_i = value / weight
};

// ฟังก์ชันสำหรับเปรียบเทียบเพื่อเรียงลำดับจากมากไปน้อย
bool compare(Item a, Item b) {
    return a.density > b.density;
}

double fractionalKnapsack(int W, vector<Item>& items, int n) {
    // 1. คำนวณค่า density สำหรับทุกชิ้น 
    for (int i = 0; i < n; i++) {
        items[i].density = (double)items[i].value / items[i].weight;
    }

    // 2. เรียงลำดับของตามความคุ้มค่า (Sort by density) 
    sort(items.begin(), items.end(), compare);

    double totalValue = 0.0; // มูลค่ารวมสูงสุดที่ได้
    int currentWeight = 0;   // น้ำหนักปัจจุบันในเป้

    // 3. เริ่มเลือกของลงเป้ตามลำดับความคุ้มค่า 
    for (int i = 0; i < n; i++) {
        // ถ้าใส่ทั้งชิ้นแล้วน้ำหนักยังไม่เกิน W
        if (currentWeight + items[i].weight <= W) {
            currentWeight += items[i].weight;
            totalValue += items[i].value;
        } 
        // ถ้าใส่ทั้งชิ้นไม่ได้ ให้ "แบ่งส่วน" เฉพาะที่เป้ยังว่างอยู่ 
        else {
            int remainingCapacity = W - currentWeight;
            totalValue += items[i].value * ((double)remainingCapacity 
                            / items[i].weight);
            break; // เป้เต็มแล้ว จบการทำงาน
        }
    }

    return totalValue;
}