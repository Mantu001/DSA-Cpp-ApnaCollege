// // Three Sum (teen number ko jorne ke baad 0 aaye uska unique combination batana hai)
// // Brute force (traversing method) {TC = O(n*n*n)}
// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>
// using namespace std;
// int main() {
//     int arr[] = {-1, 0, 1,2,-1,-4};
//     int n = sizeof(arr) / sizeof(int);
//     set<vector<int>> uniqueTriplet;
//     for (int i=0; i<n; i++){
//         for (int j=i+1; j<n; j++){
//             for (int k=j+1; k<n; k++){
//                 if ((arr[i] + arr[j] + arr[k] == 0 )&& (i != j) && (j != k) && (i != k)){
//                     vector<int> triplet = {arr[i], arr[j], arr[k]};
//                     sort (triplet.begin(), triplet.end());  // it sort the data/ set 
//                     uniqueTriplet.insert(triplet);
//                 }
//             }
//         }
//     }
//     for (auto triplet : uniqueTriplet){
//         for (int num : triplet){
//             cout << num << "  ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// other optimal and two pointer method are on leetcode LC15

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {-1, 0, 1,2,-1,-4};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, arr+n);
    for (int i=0; i<n; i++){
        cout << arr[i] << "  " ;
    }
    return 0;
}