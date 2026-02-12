#include<iostream>
using namespace std;

int main() {
    int arr[50],n,choice,pos,val;
    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter "<<n<<" elemnets: ";
     for (int i=0;i<n;i++){
        cin>>arr[i];

     }
    int value,key;
    cout << "Array Operations Menu ";
    cout << "1. Traverse";
    cout << "2. Insert";
    cout << "3. Delete";
    cout << "4. Search";
    cout << "5. Update";
    cout << "6. Sort";
    cout << "7. Exit";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {

    case 1: // Traversal
      cout << "Array elements are:\n";
         for(int i = 0; i < n; i++) {
           cout << arr[i] << " ";
    }
        cout << endl;
         break;

    case 2: // Insertion
       cout << "Enter position to insert (0-based index): ";
        cin >> pos;
        cout << "Enter value to insert: ";
        cin >> value;

         for(int i = n; i > pos; i--) {
         arr[i] = arr[i - 1];
    }
         arr[pos] = value;
         n++;

    cout << "Element inserted successfully.\n";
              break;

    case 3: // Deletion
       cout << "Enter position to delete (0-based index): ";
       cin >> pos;

       for(int i = pos; i < n - 1; i++) {
       arr[i] = arr[i + 1];
    }
    n--;

       cout << "Element deleted successfully.\n";
       break;

    case 4: // Searching (Linear Search)
        cout << "Enter element to search: ";
        cin >> key;

        for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
        cout << "Element found at index " << i << endl;
        break;}
         if(i == n - 1)
         cout << "Element not found.\n";
         }
        break;

    case 5: // Update
     cout << "Enter position to update (0-based index): ";
     cin >> pos;
     cout << "Enter new value: ";
     cin >> value;

    arr[pos] = value;
     cout << "Element updated successfully.\n";
     break;

    case 6:
    cout << "Sorting array using Bubble Sort...\n";
    for (int i = 0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap (arr[j],arr[j+1]);
            }
        }
    }
    cout << "Array sorted successfully .\n";
    break;

    default:
     cout << "Invalid choice!\n";
    }


    return 0;
}