// Book Allocation Problem 
#include <iostream>
#include <vector>
using namespace std;
bool isValid (vector<int> &arr, int n, int m, int maxAllowedPages){
    int stud = 1,  page = 0;
    for (int i=0; i<n; i++){
        if (arr[i] > maxAllowedPages){
            return false;
        }
        if (page + arr[i] <= maxAllowedPages){
            page += arr[i];
        }
        else {
            stud++;
            page = arr[i];
        }
    }
    return stud > m ? false : true;
}


int allocateBook (vector<int> &arr, int n, int m){
    if (m > n){
        return -1;
    }

    int sum = 0; 
    for (int i=0; i<n; i++){
        sum += arr[i];
    }

    int ans = -1;
    int st = 0, end = sum;
    while (st <= end){
        int mid = st + (end-st)/2;
        if (isValid (arr, n, m, mid)){
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
    vector<int> arr = {15,17,20};
    int n = 4, m = 2;
    cout << allocateBook(arr, n, m);
    return 0;
}