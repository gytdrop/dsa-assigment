#include <iostream>

using namespace std;


int main() {
    int V = 4;
    int adj[4][4] = {0};

    // Edge 0-1
    adj[0][1] = 1; adj[1][0] = 1;
    // Edge 0-2
    adj[0][2] = 1; adj[2][0] = 1;
    // Edge 1-2
    adj[1][2] = 1; adj[2][1] = 1;
    // Edge 2-3
    adj[2][3] = 1; adj[3][2] = 1;

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}