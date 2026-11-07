#include <iostream>

using namespace std;

int count_same_pairs(int a[], int b[], int n) {
    int same_pairs_cnt = 0;

    // arrays of counters
    int a_cnt[101] = {}; // = {} fills the array of a constant size with 0-s
    int b_cnt[101] = {};

    // fill the arrays of counters
    for(int i = 0; i < n; ++i) {
        ++a_cnt[a[i]];
        ++b_cnt[b[i]];
    }

    for(int i = 0; i < 101; ++i) {
        same_pairs_cnt += min(a_cnt[i], b_cnt[i]);
    }

    return same_pairs_cnt;
}

int main() {

    int n;
    cin >> n;

    int a[n];
    int b[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    cout << count_same_pairs(a, b, n) << endl;

    return 0;
}