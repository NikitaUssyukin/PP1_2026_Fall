/*
Example 1:
input:
3
2 8 16
output:
8

distinct pairs:
2 8  -> 2
2 16 -> 2
8 16 -> 8

Example 2:
input:
5
20 30 40 2 4
output:
20

distinct pairs:
20 30 -> 10
20 40 -> 20
20 2  -> 2
20 4  -> 4
30 40 -> 10
30 2  -> 2
30 4  -> 2
40 2  -> 2
40 4  -> 4
2  4  -> 2

1. Implenting input
2. Implement a loop that goes over all distinct pairs
3. Write code for calculating gcd for each pair
4. Add logic for keeping track of the largest found gcd
5. Output max gcd
*/

#include <iostream>

using namespace std;

int main() {

    // input + declaration
    int n;
    cin >> n;
    
    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    /*
    // or you can do input like this:
    for(int &x : a) { // ! will not work without & !
        cin >> x;
    }
    */

    
    // variable for tracking maximum gcd
    int max_gcd = 1;

    // getting distinct pairs
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            // here we can check our pairs
            // cout << a[i] << " " << a[j] << endl;
            
            // gcd
            int lesser_value = min(a[i], a[j]);
            int gcd = lesser_value;
            while(gcd > 1) {
                if(a[i] % gcd == 0 && a[j] % gcd == 0) break;
                --gcd;
            }

            // updating maximum gcd if our found gcd is larger
            max_gcd = max(gcd, max_gcd);
        }
    }

    // output
    cout << max_gcd << endl;

    return 0;
}