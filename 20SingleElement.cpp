// single element in a sorted array (LC 540) by linear search
#include <iostream>
using namespace std;
int singleElement (int arr[], int n){
    for (int i=0; i<n; i+=2){
        if (arr[i] != arr[i+1]){
            return arr[i];
        }
    }
    return -1;
}
int main() {
    int arr[] = {1,1,2,3,3,4,4,5,5};
    int n = sizeof(arr) / sizeof(int);
    cout << singleElement (arr, n)<<endl;
    return 0;
}