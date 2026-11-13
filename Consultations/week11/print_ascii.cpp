#include <iostream>

using namespace std;

int main() {

    for(int i = 0; i < 200; ++i) {
        cout << "ascii_code: " << i << "; char: " << char(i) << endl;
    }

    cout << "space symbol ascii: " << int(' ') << endl;

    return 0;
}