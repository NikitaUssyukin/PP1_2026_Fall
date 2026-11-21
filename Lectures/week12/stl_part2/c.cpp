/*
Deque
*/

// Builds with either -std=c++11 or -std=c++17

#include <iostream>
#include <deque>

using namespace std;

int main() {

    deque<int> dq;

    cout << "empty: " << dq.empty() << endl;

    int n;
    cin >> n; // 5
    
    while(n > 0) { // 1 2 3 4 5
        int x;
        cin >> x;
        dq.push_back(x);
        // or
        // dq.push_front(x);
        --n;
    }
    /*
    1 2 3 4 5
    */

    cout << "empty: " << dq.empty() << endl;
    cout << "size: " << dq.size() << endl;
    
    cout << "elements: " << endl;
    for(int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << " ";
    }
    /*
    1 2 3 4 5
    */

    // front and back are both O(1); at() checks the index
    cout << "front / back: " << dq.front() << " " << dq.back() << endl;
    cout << "at(1): " << dq.at(1) << endl;

    // deque can also work from the other end:
    dq.push_front(0); // add at the front
    dq.pop_back();    // remove from the back

    cout << "after push_front(0), pop_back(): ";
    for(int x : dq) {
        cout << x << " ";
    }
    cout << endl;

    dq.pop_front(); // remove from the front
    cout << "after pop_front(): ";
    for(int x : dq) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}