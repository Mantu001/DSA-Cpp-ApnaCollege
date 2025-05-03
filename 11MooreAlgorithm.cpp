// // Pair sum (Retun pair in sorted array with target sum) --> Brute force     *******doubt
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> pairSum (vector<int> nums, int target){
//     vector<int> ans;
//     int n = nums.size();
//     for (int i=0; i<n; i++){
//         for (int j=i+1; j<n; j++){
//             if (nums[i] +nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }
// int main() {
//     vector<int> arr = {2,7,11,15};
//     int target = 13;
//     vector<int> ans = pairSum ( arr , target);
//     cout << ans[0] << " , " << ans[1] <<endl;    
//     return 0;
// }


// // Pair sum (optimal)
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> pairSum ( vector<int> arr, int target){
//     vector<int> ans;
//     int n= arr.size();
//     int i=0; 
//     int j=n-1;
//     while (i<j){
//         if (arr[i] + arr[j] > target){
//             j--;
//         }
//         else if (arr[i] + arr[j] < target){
//             i++;
//         }
//         else {
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans; 
//         }
//     }
//     return ans;
// }
// int main() {
//     vector<int> arr = {2,7,11,15};
//     int target = 26;
//     vector<int> ans = pairSum ( arr , target);
//     cout << ans[0] << " , " << ans[1] <<endl; 
//     return 0;
// }


// Majority Element (Brute force algo) *** doubt
#include <iostream>
#include <vector>
using namespace std;
vector<int> majorityElement (vector<int> arr){
    int maxElement = 
}
int main() {
    
    return 0;
}