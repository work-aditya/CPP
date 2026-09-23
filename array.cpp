#include <iostream>

using namespace std;

class solution{

};

int main(){
    int arr[] = {6,4,7,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int arr2[n];
    for (int i=n; i>=0; i--){
        arr2[i]=arr[n-1-i];  
    }
    for (int i=0 ; i< n; i++){
         cout << arr2[i]<< ", " ;
    }
   

}

