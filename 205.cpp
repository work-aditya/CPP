#include <iostream>
#include <vector>

using namespace std;

class solution {
    public :
    int binarysearch(vector <int> nums, int target){


    }



};

int main (){
    vector <int> nums;
    int target;
    int n;
    cout << "enter number of elements"<<endl;
    cin >> n;
    nums.resize(n);
    for (int i = 0; i<n ; i++){
        cout << "enter the " << i << "th term " <<endl;
        cin >> nums[i];     
    }
    cout << "enter target " << endl;
    cin >> target;

    solution s;

    s.binarysearch(nums,target);

}