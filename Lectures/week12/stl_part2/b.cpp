/*
Queue
*/

// Builds with either -std=c++11 or -std=c++17

#include <iostream>
#include <queue>

using namespace std;

int main() {

    queue<int> q;

    cout << "empty: " << q.empty() << endl;

    int n;
    cin >> n; // n is at least 1, e.g. 5
    
    while(n > 0) { // 1 2 3 4 5
        int x;
        cin >> x;
        q.push(x);
        --n;
    }
    /*
    —————————
    5|4|3|2|1
    —————————
    */

    cout << "empty: " << q.empty() << endl;
    cout << "size: " << q.size() << endl;

    // front is the next customer to leave; back is the most recent arrival
    cout << "front / back: " << q.front() << " " << q.back() << endl;

    cout << "elements: " << endl;

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    /*
    1 2 3 4 5
    */

    return 0;
}