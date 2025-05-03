// // Binary Search (iterative method)
// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int n, int key){
//     int start = 0;
//     int end = n-1;
//     while(start <= end){
//         int mid = (start+end) / 2;
//         if (arr[mid] == key){
//             return mid;
//         }
//         else if (arr[mid] < key){
//             start = mid +1;
//         }
//         else {
//             end = mid -1;
//         }
//     }
//     return -1;
// }
// int main() {
//     int num[] = {1,5,76,98,99};
//     int n = sizeof(num) / sizeof(int);
//     int target = 99;
//     int result = binarySearch(num, n, target);
//     if (result != -1) {
//         cout << "Target is at index: " << result;
//     } else {
//         cout << "Target not found in the array.";
//     }
//     return 0;
// }


// binary search (iterative approach) - easy to remember
#include <iostream>
using namespace std;
int binarySearch (int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    while (start <= end){
        int mid = start + (end-start)/2;
        if (key > arr[mid]){
            start = mid + 1;
        }
        else if (key < arr[mid]){
            end = mid - 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}
int main() {
    int arr[] = {21,32,43,54,65,76,87,98};
    int size = sizeof(arr) / sizeof(int);
    int key = 21;
    cout << binarySearch (arr, size, key) <<endl;
    return 0;
}


// // Binary search (Recursive method)
// #include <iostream>
// using namespace std;

// int binarySearchRecursive(int arr[], int start, int end, int key) {
//     if (start > end) {
//         return -1; // base case: not found
//     }

//     int mid = start + (end - start) / 2;

//     if (arr[mid] == key) {
//         return mid;
//     } else if (arr[mid] < key) {
//         return binarySearchRecursive(arr, mid + 1, end, key);
//     } else {
//         return binarySearchRecursive(arr, start, mid - 1, key);
//     }
// }

// int main() {
//     int num[] = {1, 5, 76, 98, 99};
//     int n = sizeof(num) / sizeof(int);
//     int target;
//     cout << "Enter the number to search: ";
//     cin >> target;
//     int result = binarySearchRecursive(num, 0, n - 1, target);
//     if (result != -1) {
//         cout << "Target is at index: " << result << endl;
//     } else {
//         cout << "Target not found in the array." << endl;
//     }
//     return 0;
// }
