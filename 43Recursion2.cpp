// // Fibonacci series using recursion
// #include <iostream>
// using namespace std;
// int fibonaci (int n){
//     if (n == 0 || n == 1){
//         return n;
//     }
//     return fibonaci(n-1) + fibonaci(n-2);
// }
// int main() {
//     cout << "The fibinacci is " << fibonaci(9);
//     return 0;
// }


// // Check if array is sorted or not 
// #include <iostream>
// using namespace std;
// bool isSorted(int arr[], int n){
//     if (n == 0 || n == 1){
//         return true;
//     }
//     return (arr[n-1] >= arr[n-2] && isSorted(arr, n-1)); // main logic
// }
// int main() {
//     int arr [] = {1,2,3,4,5,2};
//     int n = sizeof(arr) / sizeof(int);
//     if (isSorted(arr, n)){
//         cout << "Array is Sorted "<< endl;
//     }
//     else{
//         cout << "Array is not sorted " << endl;
//     }
//     return 0;
// }


// Recursive Binary Search
#include <iostream>
int binarySearch(int arr[], int tar, int s, int e){
    while (s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == tar){
            return mid;
        }
        else if(arr[mid] < tar){
            return binarySearch(arr, tar, mid+1, e);
        }
        else {
            return binarySearch(arr, tar, s, mid-1);
        }
    }
    return -1;
}
using namespace std;
int main() {
    int num[] = {1,2,4,5,6,7,8,9};
    int size = sizeof(num)/ sizeof(num[0]);
    int key = 9;
    int st = 0;
    int end = size-1;
    int index = binarySearch(num, key, st, end);
    if (index != -1){
        cout << "key found at index "<< index << endl;
    }
    else{
        cout << "key not found "<< endl;
    }
    return 0;
}