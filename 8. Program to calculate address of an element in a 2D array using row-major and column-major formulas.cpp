#include <iostream>

using namespace std;


int main() {
    int R, C, i, j, size, base;
    cout << "Enter Rows, Cols, Base Address, Size of element: ";
    cin >> R >> C >> base >> size;
    cout << "Enter index i and j to find address: ";
    cin >> i >> j;

    int rowMajor = base + (i * C + j) * size;
    int colMajor = base + (j * R + i) * size;

    cout << "Row Major Address: " << rowMajor << endl;
    cout << "Column Major Address: " << colMajor << endl;
    return 0;

}