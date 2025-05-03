// // Product of array except self (using division)
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4};
//     int s = sizeof(arr) / sizeof(int);
//     int product[s];
//     int prod = 1; 
//     for (int i=0; i<s; i++){
//         prod *= arr[i];
//     }
//     // cout << "product is: "<< prod <<endl;
//     for (int i=0; i<s; i++){
//         product[i] = prod / arr[i];
//         cout << product[i] << "  " ;
//     }
//     return 0;
// }


// Product of array except self (Brute force)
#include <iostream>
using namespace std;
void productArray(int arr[], int s, int ans[]){
    for (int i=0; i<s; i++){
        int prod = 1;
        for (int j=0; j<s; j++){
            if (i != j){
                prod *= arr[j];
            }
        }
        ans[i] = prod;
    }
}
int main() {
    int arr[] = {1,2,3,4};
    int s = sizeof(arr) / sizeof(arr[0]);
    int ans[s];
    productArray(arr, s, ans);
    for (int i=0; i<s; i++){
        cout << ans[i] << "  " ;
    }
    return 0;
}

// more optimised method is solved at leetcode problem no 238