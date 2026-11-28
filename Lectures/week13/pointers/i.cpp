/*
Pointers
Working with arrays
*/

#include <iostream>

using namespace std;

int main() {

   int n;
   cin >> n;

   int a[n];

   for(int* ptr = a; ptr < a + n; ++ptr) {
      cin >> *ptr;
   }

   for(int* ptr = a; ptr < a + n; ++ptr) {
      cout << *ptr << endl;
   }
   
   return 0;
}