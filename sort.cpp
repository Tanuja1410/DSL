#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, choice;
    int marks[50];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    cout << "\nChoose Sorting Method:\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            bubbleSort(marks, n);
            cout << "\nElements sorted using Bubble Sort:\n";
            display(marks, n);
            break;

        case 2:
            selectionSort(marks, n);
            cout << "\nElements sorted using Selection Sort:\n";
            display(marks, n);
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
