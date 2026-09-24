#include <iostream>

using namespace std;
int reversearray(int arr[], int n){
    int temp;
    for (int i = 0 ; i<n; i++ ){
        temp=arr[i];
       arr[i]=arr[n];
       arr[n]=arr[temp]; 
       cout << arr[i] << endl;
    }


}

int main(){
    int arr[] ={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    reversearray(arr,n);
    cout << *arr <<endl;


}