#include <iostream>
using namespace std;

#define MAX 5
#define SIZE 10

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
        cout << value << " pushed into stack\n";
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top--] << " popped from stack\n";
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


class HashTable {
    int table[SIZE];

public:
    HashTable() {
        for (int i = 0; i < SIZE; i++)
            table[i] = -1;
    }

    int hashFunction(int key) {
        return key % SIZE;
    }

    void insert(int key) {
        int index = hashFunction(key);

        while (table[index] != -1) {
            index = (index + 1) % SIZE;
        }

        table[index] = key;
        cout << key << " inserted at index " << index << endl;
    }

    void search(int key) {
        int index = hashFunction(key);
        int start = index;

        while (table[index] != -1) {
            if (table[index] == key) {
                cout << key << " found at index " << index << endl;
                return;
            }
            index = (index + 1) % SIZE;

            if (index == start)
                break;
        }

        cout << key << " not found\n";
    }

    void display() {
        cout << "Hash Table:\n";
        for (int i = 0; i < SIZE; i++) {
            cout << i  << table[i] << endl;
        }
    }
};

int main() {

    Stack s;
    HashTable h;

    cout << " STACK OPERATIONS \n";
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();

    cout << "\n HASHING OPERATIONS\n";
    h.insert(15);
    h.insert(25);
    h.insert(35);
    h.insert(20);
    h.display();
    h.search(25);
    h.search(99);

    return 0;
}