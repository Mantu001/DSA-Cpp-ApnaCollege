// // Search in roated sorted array
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {3, 4, 5, 6, 7, 0, 1, 2};
//     int n = sizeof(arr) / sizeof(int);
//     int key = 0;
//     int start = 0; 
//     int end = n - 1;
//     while (start <= end) {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == key) {
//             cout << "Element found at index: " << mid << endl;
//             return 0; // successfully exit
//         }
//         // Left half is sorted
//         if (arr[start] <= arr[mid]) {
//             if (arr[start] <= key && key <= arr[mid]) {
//                 end = mid - 1;
//             } else {
//                 start = mid + 1;
//             }
//         }
//         // Right half is sorted
//         else {
//             if (arr[mid] <= key && key <= arr[end]) {
//                 start = mid + 1;
//             } else {
//                 end = mid - 1;
//             }
//         }
//     }
//     cout << "Element not found in the array." << endl;
//     return 0;
// }
