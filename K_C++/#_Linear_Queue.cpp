#include <iostream>

using namespace std;

#define MAX 5

class LinearQueue {
private:
    int queue[MAX];
    int front, rear;

public:
    LinearQueue() {
        front = rear = -1;
    }

    bool isFull() {
        return rear == MAX - 1;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        queue[++rear] = item;
        cout << "Enqueued: " << item << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return queue[front++];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    LinearQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);  // Queue is full

    q.display();  // Output: 10 20 30 40 50

    q.dequeue();
    q.dequeue();
    q.display();  // Output: 30 40 50

    q.enqueue(60);  // Queue is full
    q.display();

    return 0;
}
