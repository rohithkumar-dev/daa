#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class QueueLinkedList {
private:
    Node* front;
    Node* rear;

public:
    QueueLinkedList() {
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int data) {
        Node* newNode = new Node();

        newNode->data = data;
        newNode->next = nullptr;

        if (rear == nullptr) {
            front = rear = newNode;

            cout << "Enqueued " << data << "\n";
            return;
        }

        rear->next = newNode;
        rear = newNode;

        cout << "Enqueued " << data << "\n";
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return -1;
        }

        Node* temp = front;

        int dequeuedValue = front->data;

        front = front->next;

        if (front == nullptr) {
            rear = nullptr;
        }

        delete temp;

        return dequeuedValue;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        Node* current = front;

        cout << "Queue components (Front -> Rear):\n";

        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }

        cout << "NULL\n";
    }

    ~QueueLinkedList() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    cout << "=== 3. Queue Operations using Linked List ===\n";

    QueueLinkedList queue;

    queue.enqueue(100);
    queue.enqueue(200);
    queue.enqueue(300);

    queue.display();

    cout << "Dequeued element: "
         << queue.dequeue() << "\n";

    queue.display();

    return 0;
}
