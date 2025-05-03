// Merge two sorted array 
#include <iostream>
using namespace std;
int main() {
    int arr1[] = {1,2,3,0,0,0};
    int m = 3;
    int arr2[] = {2,5,6};
    int n = 3;
    int i = m-1, j = n-1, k = m+n-1;
    while (i >= 0 && j >= 0){
        if (arr1[i] > arr2[j]){
            arr1[k] = arr1[i];
            k--;
            i--;
        }
        else {
            arr1[k] = arr2[j];
            j--;
            k--;
        }
    }
    while (j >= 0){
        arr1[k] = arr2[j];
        j--;
        k--;
    }
    for (int i=0; i<m+n; i++){
        cout << arr1[i] << "  ";
    }
    return 0;
}


// next permutation problem is solved on leetcode p-31 refer from this