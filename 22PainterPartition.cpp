// Painter Partition Problem  doubt
#include <iostream>
#include <vector>
using namespace std;
bool ifPossible (vector<int> &arr, int n, int m, int maxAllowedTime){
    int painter = 1;
    int time = 0;
    for (int i=0; i<n; i++){
        if (time + arr[i] <= maxAllowedTime){
            time += arr[i];
        }
        else {
            painter++;
            time = arr[i];
        }
    }
    return painter <= m;
}
int minTimePaint (vector<int> &arr, int n, int m){
    int sum = 0; 
    int maxVal = INT8_MIN;
    for (int i=0; i<n; i++){
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int st = maxVal;
    int end = sum;
    int ans = -1;
    while (st <= end){
        int mid = st + (end-st)/2;
        if (ifPossible (arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n = 4; 
    int m = 2;
    cout << minTimePaint (arr, n, m);
    return 0;
}
