#include <iostream>
using namespace std;

#define MAX 5

class Queue {
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    
    void enqueue(int value) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow\n";
        }
        else {
            if (front == -1)
                front = 0;
            rear++;
            arr[rear] = value;
            cout << value << " inserted into queue\n";
        }
    }

   
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
        }
        else {
            cout << arr[front] << " deleted from queue\n";
            front++;
        }
    }

    
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
        }
        else {
            cout << "Queue elements are: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            case 4:
                cout << "Exit\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 4);

    return 0;
}