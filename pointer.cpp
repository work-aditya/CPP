#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    int *ptr = &a;
    
    cout << a <<" = " << *ptr <<endl;
    cout << ptr << " = " << &a << endl;

    int **ptr2 = &ptr;
    cout << *ptr2 << " = " << ptr <<endl;
    cout << **ptr2 << " = " << a << endl;
    cout << &ptr2 << endl;

    **ptr2 = 20;
    cout << a << endl;
    *ptr2 = &b;
    cout << *ptr << " = " << b <<endl;


}