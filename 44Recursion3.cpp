// Recursion part 3

// Print all subset using recursion {for unique element}
#include <iostream>
#include <vector>
using namespace std;
void printSubsets(vector<int> &arr, vector<int> &ans, int i){
    if (i == arr.size()){
        for (int val : ans){
            cout << val << " ";
        }
        cout << endl;
        return;
    }
    // inlclude 
    ans.push_back(arr[i]);
    printSubsets(arr, ans, i+1);
    ans.pop_back(); // backtrack
    // exclude
    printSubsets(arr, ans, i+1);
}
int main() {
    vector<int> arr = {1,2,6,7};
    vector<int> ans ; // store subset
    printSubsets(arr, ans, 0);
    return 0;
}