// // Bubble sort (usint vector i solve this this is also solve by array also)
// #include <iostream>
// #include <vector>
// using namespace std;
// void bubbleSort (vector<int> &arr){
//     int n = arr.size();
//     for (int i=0; i<n-1; i++){
//         for (int j=0; j<n-i-1; j++){
//             if (arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }
// void printArray (vector<int> &arr){
//     int n = arr.size();
//     for (int i=0; i<n; i++){
//         cout << arr[i] << "  ";
//     }
// }
// int main() {
//     vector<int> arr = {5,2,4,1,3};
//     bubbleSort (arr);
//     printArray (arr);
//     return 0;
// }


// // Bubble sort optiomised (in previous bubble sort the porblem is that if my array is sorted in mid of the algo but it aslo run to avoid running after sorting we apply this optimisation)
// #include <iostream>
// #include <vector>
// using namespace std;
// void bubbleSort (vector<int> &arr){
//     int n = arr.size();
//     for (int i=0; i<n-1; i++){
//         bool isSwap = false;
//         for (int j=0; j<n-i-1; j++){
//             if (arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 isSwap = true;
//             }
//         }
//         if (!isSwap){ // array is already sorted
//             return;
//         }
//     }
// }
// void printArray (vector<int> &arr){
//     int n = arr.size();
//     for (int i=0; i<n; i++){
//         cout << arr[i] << "  ";
//     }
// }
// int main() {
//     vector<int> arr = {4,7,3,2,8,1};
//     bubbleSort (arr);
//     printArray (arr);
//     return 0;
// }


// // Selection sort
// #include <iostream>
// using namespace std;
// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int smallestIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[smallestIndex] > arr[j]) {
//                 smallestIndex = j;
//             }
//         }
//         swap(arr[i], arr[smallestIndex]);  // swap AFTER finding smallest
//     }
// }
// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << "  ";
//     }
//     cout << endl;
// }
// int main() {
//     int arr[] = {8, 4, 9, 3, 2, 0, 5};
//     int n = sizeof(arr) / sizeof(int);
//     selectionSort(arr, n);
//     printArray(arr, n);
//     return 0;
// }


// Insertion sort
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i - 1;
        // Shift elements of arr[0..i-1] that are greater than curr
        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
int main() {
    int arr[] = {5, 3, 6, 2, 1, 4};
    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}

