#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void appendToTail(Node*& head, Node*& tail, int value) {
    Node* newNode = createNode(value);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

int main() {
    int totalCars;
    cin >> totalCars;

    Node* evenHead = NULL;
    Node* evenTail = NULL;
    Node* oddHead = NULL;
    Node* oddTail = NULL;

    for (int i = 0; i < totalCars; i++) {
        int carId;
        cin >> carId;

        if (carId % 2 == 0) {
            appendToTail(evenHead, evenTail, carId);
        } else {
            appendToTail(oddHead, oddTail, carId);
        }
    }

    Node* resultHead;

    if (evenHead != NULL) {
        evenTail->next = oddHead;
        resultHead = evenHead;
    } else {
        resultHead = oddHead;
    }

    Node* cur = resultHead;

    while (cur != NULL) {
        cout << cur->data;

        if (cur->next != NULL) {
            cout << " ";
        }

        cur = cur->next;
    }

    cout << endl;

    cur = resultHead;

    while (cur != NULL) {
        Node* tmp = cur;
        cur = cur->next;
        delete tmp;
    }

    return 0;
}