#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2];
    float c[2][2];

    cout << "Enter elements of first matrix:";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];

    cout << "Enter elements of second matrix:";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> b[i][j];

    
    cout << "Matrix Addition:";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "Matrix Subtraction:";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] - b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "Matrix Multiplication:";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
