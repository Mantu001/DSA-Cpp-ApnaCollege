// // 2 Sum (Brute force) {TC = O(n*n)}
// #include <iostream>
// using namespace std;
// pair<int,int> twoSum (int arr[], int n,  int tar){
//     int sum;
//     for (int i=0; i<n; i++){
//         for (int j=i+1; j<n; j++){
//             sum = arr[i] + arr[j];
//             if (sum == tar){
//                 return {i,j};
//             }
//         }
//     }
//     return {-1,-1};
// }
// int main() {
//     int arr[] = {2,5,7,3,5,8,1,0};
//     int n = sizeof(arr)/ sizeof(int);
//     int tar = 13;
//     pair<int,int> result = twoSum (arr, n, tar);
//     if (result.first != -1){
//         cout << "The Index are : " << result.first << " and " << result.second << endl;
//     }else{
//         cout << " No pair found " << endl;
//     }
//     return 0;
// }


// // Two sum (Two Pointer Approach) {O(nlogn)}
// // glitch is that it does not return the original value it return the sorted value
// #include <iostream>
// #include <algorithm>
// using namespace std;
// pair<int,int> twoSum (int arr[], int n, int tar){
//     int sum;
//     int st = 0, end = n-1;
//     while (st < end){
//         sum = arr[st] + arr[end];
//         if (sum == tar){
//             return {st, end};
//         }else if (sum > tar){
//             end --;
//         }else {
//             st ++;
//         }
//     }
//     return {-1,-1};
// }
// int main() {
//     int arr[] = {2,5,7,3,5,8,1,0};
//     int n = sizeof(arr)/ sizeof(int);
//     int tar = 13;
//     sort (arr, arr+n);
//     cout << "Array after Sort :" <<endl;
//     for (int i=0; i<n; i++){
//         cout << arr[i] << "  ";
//     }
//     cout << endl;
//     pair<int,int> result = twoSum (arr, n, tar);
//     if (result.first != -1){
//         cout << "The Index are : " << result.first << " and " << result.second << endl;
//     }else{
//         cout << " No pair found " << endl;
//     }
//     return 0;
// }


// it's optimised method is on leetcode 01 (hashing mehtod {tc = O(n)})


// Find repeated and missing value (LC 2965) solved on leedcode


// Finding Duplicate (my approach)
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    vector<int> num = {1,2,3,2,4,3};
    int n = num.size();
    map<int, int> count;
    for (int x : num){
        count[x]++;
    }
    cout << "Duplicate Elements are: "<< endl;
    for (auto pair : count){
        if (pair.second > 1 ){
            cout << pair.first << endl;
        }
    }
    return 0;
}


// // Finding Duplicate (method 1) wrong approach it solved on LC287
// #include <iostream>
// #include <set>
// #include <vector>
// using namespace std;
// int main() {
//     vector<int> num = {1,2,3,2,4,3};
//     set<int> s;
//     cout << "Duplicate Element : "<<endl;
//     for (int val : num){
//         if(s.find(val) != s.end()){
//             cout <<  val;
//         }else {
//             s.insert(val);
//         }
//     }
//     return 0;
// }