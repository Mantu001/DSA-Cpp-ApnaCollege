// // Printiong subarray
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = 5;
//     for (int start=0; start<size; start++){
//         for (int end=start; end<size; end++){
//             for (int i=start; i<=end; i++){
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// // Printing Max subarray sum (Brute force Method)
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {3,-4,5,4,-1,7,-8};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int maxsum = INT8_MIN;
//     for (int st=0; st<size; st++){
//         int currSum = 0;
//         for (int end = st; end<size; end++){
//             currSum += arr[end];
//             maxsum = max(currSum, maxsum);
//         }
//     }
//     cout << "max array sum is " << maxsum << endl; 
//     return 0;
// }


// Printing Max subarray sum (Kadane Algorithm)
#include <iostream>
using namespace std;
int main() {
    int arr[] = {-3,-4,-5,-4,-1,7,-8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int currSum = 0; int maxSum = INT8_MIN;
    for (int i=0; i<size; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0){
            currSum = 0;
        }
    }
        cout << "max array sum is " << maxSum << endl; 
    return 0;
}