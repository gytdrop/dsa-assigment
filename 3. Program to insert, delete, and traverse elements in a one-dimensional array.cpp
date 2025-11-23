#include <iostream>

using namespace std;


void insert(int arr[], int &n, int pos, int val) {
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;

}


void deleteElement(int arr[], int &n, int pos) {
    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;

}


void traverse(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

}


int main() {
    int arr[100], n = 0, choice, pos, val;

    while (true) {
        cout << "\n1.Insert 2.Delete 3.Traverse 4.Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter position (0-index) and value: ";
            cin >> pos >> val;
            insert(arr, n, pos, val);
        } else if (choice == 2) {
            cout << "Enter position to delete: ";
            cin >> pos;
            deleteElement(arr, n, pos);
        } else if (choice == 3) {
            traverse(arr, n);
        } else {
            break;
        }
    }
    return 0;

}