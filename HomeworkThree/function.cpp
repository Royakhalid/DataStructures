#include <iostream>

using namespace std;

void swap(int* a, int* b) {
  
    int z = *a;
 
    *a = *b;
    *b = z;
}

int main() {
    int a, b;

  
    cout << "Enter the first value ";
    cin >> a;
    cout << "Enter the second value";
    cin >> b;

  
    cout << "Before a = " << a << " b  = " << b << endl;

   
    swap(&a, &b);

   
    cout << "After a =  " << a << " b =  " << b<< endl;

    return 0;
}