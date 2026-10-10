/*
Demonstration of quadratic time complexity of nested loops: O(n^2)

Why complexity matters for 2D arrays:
- An n by m nested loop executes n * m operations.
- If n = m = 30,000, operations = 900,000,000 (~10^9), taking ~1-2 seconds.
- If n = m = 1,000,000 (10^6), operations = 10^12, taking over 15 minutes!
- On Ejudge, the time limit is typically 1.0 second (~10^8 operations max).
  Therefore, nested O(n^2) loops will trigger TLE (Time Limit Exceeded) if n > 10,000.

--------------------------------------------------------------------------------
HOW TO MEASURE EXECUTION TIME ON YOUR COMPUTER:
--------------------------------------------------------------------------------
1. macOS & Linux (in Terminal / Bash / Zsh):
   Compile:
     g++ n.cpp -o n
   Measure:
     time ./n

2. Windows - PowerShell (Default in VS Code on Windows):
   Compile:
     g++ n.cpp -o n.exe
   Measure:
     Measure-Command { .\n.exe }

3. Windows - Command Prompt (cmd.exe):
   Compile:
     g++ n.cpp -o n.exe
   Measure (prints start time, runs program, prints end time):
     echo %TIME% & n.exe & echo %TIME%
--------------------------------------------------------------------------------
*/

#include <iostream>

using namespace std;

int main() {

    // With n = 30000, you will notice a brief pause (~1-2 seconds)
    int n = 30000;

    long long cnt = 0;

    for(int i = 0; i < n; ++i) {     // outer loop runs n times
        for(int j = 0; j < n; ++j) { // inner loop runs n times for each i
            ++cnt;
        }
    }

    cout << "Total loop iterations: " << cnt << "\n";

    return 0;
}
