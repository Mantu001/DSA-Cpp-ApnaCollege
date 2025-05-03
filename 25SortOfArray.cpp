// // Sort of array (aasan wala basic approach) tc - n(log n)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//     vector<int> arr = {2,1,0,2,2,1,0,0,2};
//     int n = arr.size();
//     sort (arr.begin(), arr.end());
//     for (int i : arr){
//         cout << i << "  ";
//     }
//     return 0;
// }


// // sort of array (optimal)
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {2,1,0,2,2,1,0,0,2};
//     int n = sizeof(arr) / sizeof(int);
//     int count_0 = 0, count_1 = 0, count_2 = 0;
//     for (int i=0; i<n; i++){
//         if (arr[i] == 0){
//             count_0++;
//         }
//         else if (arr[i] == 1){
//             count_1++;
//         }
//         else {
//             count_2++;
//         }
//     }
//     int index = 0;
//     for (int i=0; i<count_0; i++){
//         arr[index++] = 0;
//     }
//     for (int i=0; i<count_1; i++){
//         arr[index++] = 1;
//     }
//     for (int i=0; i<count_2; i++){
//         arr[index++] = 2;
//     }
//     for (int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// // Sort of Array (DNF algo - dutch national flag algo)
// #include <iostream>
// #include <vector>
// using namespace std;
// void sortArray (vector<int> &arr){
//     int low = 0, mid = 0, high = arr.size()-1;
//     while (mid <= high){
//         if (arr[mid] == 0){
//             swap (arr[mid], arr[low]);
//             mid ++;
//             low ++;
//         }
//         else if (arr[mid] == 1){
//             mid ++;
//         }
//         else {
//             swap (arr[mid], arr[high]);
//             high --;
//         }
//     }
// }
// void printArray (vector<int> arr){
//     for (int i : arr){
//         cout << i << "  ";
//     }
// }
// int main() {
//     vector<int> arr = {2,1,0,2,2,1,0,0,2};
//     int n = arr.size();
//     sortArray (arr);
//     printArray (arr);
//     return 0;
// }