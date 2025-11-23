#include <iostream>

using namespace std;


int main() {
    int V = 5;
    int adj[5][5] = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0}
    };
    
    bool visited[5] = {false};
    int queue[100];
    int front = 0, rear = 0;

    // Start BFS from node 0
    visited[0] = true;
    queue[rear++] = 0;

    cout << "BFS: ";
    while (front < rear) {
        int curr = queue[front++];
        cout << curr << " ";

        for (int i = 0; i < V; i++) {
            if (adj[curr][i] == 1 && !visited[i]) {
                visited[i] = true;
                queue[rear++] = i;
            }
        }
    }
    cout << endl;
    return 0;

}