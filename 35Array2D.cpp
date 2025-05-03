// // 2D Array (Matrix) Basics
// #include <iostream>
// using namespace std;
// int main() {
//     int matrix [4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
//     int row = 4;
//     int col = 3;
//     cout << matrix[2][1];
//     cout << " Printing output of 2D Array" << endl;
//     for (int i=0; i<row; i++){
//         for (int j=0; j<col; j++){
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// // Linear search in 2d array
// #include <iostream>
// using namespace std;
// string linearSearch2D (int arr[][4], int r, int c, int key){
//     for (int i=0; i<r; i++){
//         for (int j=0; j<c; j++){
//             if (arr[i][j] == key){
//                 return "key found";
//             }
//         }
//     }
//     return "not found";
// }
// int main() {
//     int arr[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
//     int row = 3;
//     int col = 4;
//     int key = 31;
//     cout << linearSearch2D (arr, row, col, key);
//     return 0;
// }


// // returning element exact position in 2D array (it is solved by using pair in STL)
// #include <iostream>
// using namespace std;
// pair<int,int> linearSearch2D (int arr[][4], int r, int c, int key){
//         for (int i=0; i<r; i++){
//             for (int j=0; j<c; j++){
//                 if (arr[i][j] == key){
//                     return {i,j};
//                 }
//             }
//         }
//         return {-1,-1};
//     }
// int main() {
//     int arr[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
//     int row = 3;
//     int col = 4;
//     int key = 1;
//     pair<int,int> position = linearSearch2D (arr, row, col, key);
//     if (position.first != -1){
//         cout << "Key found at position " << position.first << "  " << position.second << endl;
//     }
//     else {
//         cout << " key not found " << endl;
//     }
//     return 0;
// }


// // Maximum row sum
// #include <iostream>
// using namespace std;
// int getMaxSum (int arr[][3], int r, int c){
//     int maxRowSum = INT16_MIN;
//     for (int i=0; i<r; i++){
//         int rowSumI = 0;
//         for (int j=0; j<c; j++){
//             rowSumI += arr[i][j];
//         }
//         maxRowSum = max(maxRowSum, rowSumI);
//     }
//     return maxRowSum;
// }
// int main() {
//     int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9}};
//     int row = 3, col = 3;
//     cout << "Maximum sum value is : " << getMaxSum (arr, row, col);
//     return 0;
// }


// // Maximum column sum
// #include <iostream>
// using namespace std;
// int getMaxSum (int arr[][3], int r, int c){
//     int maxRowSum = INT16_MIN;
//     for (int j=0; j<c; j++){
//         int colSumJ = 0;
//         for (int i=0; i<r; i++){
//             colSumJ += arr[i][j];
//         }
//         maxRowSum = max(maxRowSum, colSumJ);
//     }
//     return maxRowSum;
// }
// int main() {
//     int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9}};
//     int row = 3, col = 3;
//     cout << "Maximum sum value is : " << getMaxSum (arr, row, col);
//     return 0;
// }


// // Diagonal Sum  TC = O(n*n)
// #include <iostream>
// using namespace std;
// int diagonalSum (int matrix[][4], int size){
//     int sum = 0;
//     for (int i=0; i<size; i++){
//         for (int j=0; j<size; j++){
//             if (i == j){
//                 sum += matrix[i][j];
//             }
//             else if (j == size-i-1){
//                 sum += matrix[i][j];
//             }
//         }
//     }
//     return sum;
// }
// int main() {
//     int matrix[][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
//     int n = 4;
//     cout << "Sum of diagonal Matrix is : " << diagonalSum (matrix, n) << endl;
//     return 0;
// }


// // Diagonal Sum  (optimised) TC = O(n)
// #include <iostream>
// using namespace std;
// int diagonalSum (int matrix[][4], int size){
//     int sum = 0;
//     for (int i=0; i<size; i++){
//         sum += matrix[i][i];
//         if (i != size-i-1){
//             sum += matrix[i][size-i-1];
//         }
//     }
//     return sum;
// }
// int main() {
//     int matrix[][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
//     int n = 4;
//     cout << "Sum of diagonal Matrix is : " << diagonalSum (matrix, n) << endl;
//     return 0;
// }


// 2D vector 
#include <iostream>
#include <vector>
using namespace std;    
int main() {
    vector<vector<int>> matrix = {{1,2,3},{4,5,6,3,5},{7,8,9}};
    for (int i=0; i<matrix.size(); i++){
        for (int j=0; j<matrix[i].size(); j++){
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}