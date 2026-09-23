#include <iostream>
using namespace std;

int main(){
    int a =10;
    int b =30;
    
    int *ptr = &a;
    ptr = &b;
    cout << &a <<endl;
    cout << ptr << endl;
    cout << *ptr << endl;
}