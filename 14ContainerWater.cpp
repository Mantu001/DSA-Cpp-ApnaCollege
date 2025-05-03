// // Container with nost water problem (Brute force approach)
// #include <iostream>
// using namespace std;
// int maxWater (int height[], int n){
//     int ans = 0;
//     for (int i=0; i<n; i++){
//         for (int j=i+1; j<n; j++){
//             int ht = min(height[i], height[j]);
//             int wd = j-i;
//             int area = wd*ht;
//             ans = max(ans, area);
//         }
//     }
//     return ans;
// }
// int main() {
//     int height[] = {1,8,6,2,5,4,8,3,7};
//     int s = sizeof(height) / sizeof(int);
//     cout << "The maximum water contained is "<< maxWater(height, s) << endl;
//     return 0;
// }


// Two pointer method to find max water (optimised)
#include <iostream>
using namespace std;
int maximumWater (int height[], int size){
    int maxWater = 0;
    int left = 0;
    int right = size-1;
    while (left < right){
        int ht = min(height[left] , height[right]);
        int wd = right - left ;
        int currWater = ht * wd;
        maxWater = max(currWater, maxWater);
        if (height[left] < height[right]){
            left++;
        }
        else {
            right--;
        }
    }
    return maxWater;
}
int main() {
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int s = sizeof(arr) / sizeof(int);
    cout << "The maximum is "<< maximumWater(arr, s) <<endl;
    return 0;
}