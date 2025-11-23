#include <iostream>

using namespace std;


int main() {
    char tree[10] = {'\0'};
    
    // Root at index 0
    tree[0] = 'A';
    // Left child of 0 at 2*0 + 1
    tree[1] = 'B';
    // Right child of 0 at 2*0 + 2
    tree[2] = 'C';
    // Left child of 1 at 2*1 + 1
    tree[3] = 'D';
    // Right child of 1 at 2*1 + 2
    tree[4] = 'E';

    cout << "Node A: Left->" << tree[1] << " Right->" << tree[2] << endl;
    cout << "Node B: Left->" << tree[3] << " Right->" << tree[4] << endl;
    return 0;

}