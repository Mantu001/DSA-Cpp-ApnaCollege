
// // Subarray sum is equal to k (Brute force approach) {this is only for k=3}
// #include <iostream>
// using namespace std;
// int subarraySum (int arr[], int n, int key){
//     int count = 0;
//     for (int i=0; i<=n-3; i++){
//         if ((arr[i] + arr[i+1] + arr[i+2]) == key){
//             count ++;
//         }
//     }
//     return count ;
// }
// int main() {
//     int arr[] ={9,4,20,3,10,5};
//     int n = sizeof(arr) / sizeof(int);
//     int key = 33;
//     cout << "the count is " << subarraySum (arr, n, key);
//     return 0;
// }

// // Subarray sum is equal to k (Brute force approach) vector approach {this is only for k=3}
// #include <iostream>
// #include <vector>
// using namespace std;
// int subarraySum (vector<int> &value, int key){
//     int count = 0;
//     int n = value.size();
//     for (int i=0; i<=n-3; i++){
//         if ((value[i] + value[i+1] + value[i+2]) == key){
//             count ++;
//         }
//     }
//     return count ;
// }
// int main() {
//     vector<int> val = {9,4,20,3,10,5};
//     int key = 33;
//     cout << "The count is " << subarraySum (val, key);
//     return 0;
// }

// Subarray sum is equal to k (Brute force approach) vector approach, two Pointer approach {this is for k will be any value}
#include <iostream>
#include <vector>
using namespace std;
int subarraySum(vector<int> arr, int key)
{
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == key)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    vector<int> val = {9, 4, 20, 3, 10, 5};
    int key = 33;
    cout << "The count is " << subarraySum(val, key);
    return 0;
    return 0;
}


// optimesed code is solve on LC 560 (prefix sum)
