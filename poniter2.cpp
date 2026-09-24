#include <iostream>

using namespace std;

class solution {
    public:
    int linearSearch(int  &nums , int n ,int  target){

    }
};

int main(){
    int n;
    cout << "enter the number of elemets" << endl;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout << "enter " << i << " th term" << endl;
        cin >> arr[i];

    }
    int target;
    cout << "enter target" << endl;
    cin >> target;
    solution s;
    s.linearSearch(arr[], n , target);

}