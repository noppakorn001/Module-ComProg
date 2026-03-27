// โครงสร้างโหนดของ Huffman Tree
struct Node {
    char data;       // ตัวอักษร
    int freq;        // ความถี่ [cite: 657]
    Node *left, *right;

    Node(char d, int f) : data(d), freq(f), 
        left(nullptr), right(nullptr) {}
};
 
// ฟังก์ชันเปรียบเทียบสำหรับ Priority Queue (Min-Heap) 
struct compare {
    bool operator()(Node* l, Node* r) {
        return l->freq > r->freq; // น้อยที่สุดอยู่บนสุด
    }
};

Node* buildHuffmanTree(char data[], int freq[], int n) {
    // 1. สร้างโหนดใบและเพิ่มลงใน Priority Queue (S) 
    priority_queue<Node*, vector<Node*>, compare> minHeap;
    for (int i = 0; i < n; ++i) {
        minHeap.push(new Node(data[i], freq[i]));
    }

    // 2. วนลูปจนเหลือโหนดเดียวใน Heap
    while (minHeap.size() != 1) {
        // ดึง 2 โหนดที่ความถี้น้อยที่สุดออกมา (L, R)
        Node *left = minHeap.top(); minHeap.pop();
        Node *right = minHeap.top(); minHeap.pop();

        // 3. สร้างโหนดแม่ใหม่ที่เป็นผลรวมของลูกทั้งสอง 
        // '$' คือสัญลักษณ์แทนโหนดภายใน (Internal Node)
        Node *parent = new Node('$', left->freq + right->freq);
        parent->left = left;
        parent->right = right;

        // 4. เพิ่มโหนดแม่กลับเข้าไปใน Heap
        minHeap.push(parent);
    }

    // 5. คืนค่ารากของ Huffman Tree 
    return minHeap.top();
}

// ฟังก์ชันแสดงรหัส (ลากเส้น 0/1) 
void printCodes(Node* root, string str) {
    if (!root) return;

    if (root->data != '$') // ถ้าเป็นโหนดใบ (Leaf)
        cout << root->data << ": " << str << endl;

    printCodes(root->left, str + "0");  // ซ้ายเป็น 0 
    printCodes(root->right, str + "1"); // ขวาเป็น 1 
}