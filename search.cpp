#include <iostream>
using namespace std;
int main() {
    int n, key;
    cout<< "Enter number of elements: ";
    cin>> n;

    int* x = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    cout << "Enter the number to search: ";
    cin >> key;

    // -------- Linear Search --------
    cout << "\nUsing Linear Search:" << endl;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (x[i] == key) {
            cout << "Number found at position: " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Number not found" << endl;
    }

    // -------- Binary Search --------
    cout << "\nUsing Binary Search:" << endl;

    sort(x, x + n);   // Binary search needs sorted list
    int low = 0;
    int high = n - 1;
    found = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (x[mid] == key) {
            cout << "Number found in sorted list at position: " << mid + 1 << endl;
            found = true;
            break;
        } else if (x[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        cout << "Number not found in sorted list" << endl;
    }

    delete[] x;
    return 0;
}