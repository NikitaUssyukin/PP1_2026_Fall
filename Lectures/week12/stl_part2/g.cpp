/*
Queue
Simulating one server: customers are served in arrival order
Input: n, then n service times
Output: the time each customer leaves
*/

// Builds with either -std=c++11 or -std=c++17

#include <iostream>
#include <queue>

using namespace std;

int main() {

    int n;
    cin >> n; // n is at least 1

    queue<int> q;

    for(int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        q.push(t);
    }

    int time = 0;

    while(!q.empty()) {
        // the customer at the front is served first
        time += q.front();
        q.pop();

        cout << time << " "; // this customer leaves at `time`
    }
    cout << endl;

    return 0;
}
