#include <iostream>
#include <vector>
using namespace std;

void sortBinaryArray(vector<int>& arr) {
    int zeroPointer = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            arr[zeroPointer] = 0;
            zeroPointer++;
        }
    }
    
    while (zeroPointer < arr.size()) {
        arr[zeroPointer] = 1;
        zeroPointer++;
    }
}

int main() {
    vector<int> arr = {4,5,3,8,6,2};
    
    sortBinaryArray(arr);
    
    cout << "Sorted Binary Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
