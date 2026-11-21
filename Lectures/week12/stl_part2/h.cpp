/*
Deque
Sliding window: the sum of every k consecutive values
Input: n, k, then n numbers
Output: one sum per window of size k
*/

// Builds with either -std=c++11 or -std=c++17

#include <iostream>
#include <deque>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k; // k <= n

    deque<int> window;
    int window_sum = 0;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        window.push_back(x);
        window_sum += x;

        // keep only the last k values in the window
        if(i >= k) {
            window_sum -= window.front();
            window.pop_front();
        }

        if(i >= k - 1) {
            cout << window_sum << " ";
        }
    }
    cout << endl;

    return 0;
}
