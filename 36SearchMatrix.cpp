// Search in 2D matrix (brute force approach (linear search))
#include <iostream>
using namespace std;
bool linearSearch (int matrix[][4], int m, int n, int key){
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (matrix[i][j] == key){
                return true;
            }
        }
    }
    return false;
}
int main() {
    int matrx[][4] = {{32,3,5,2},{87,34,97,34},{95,17,53,86}};
    int k = 17;
    if (linearSearch(matrx, 3, 4, k)){
        cout << "Key found " << endl;
    }else {
        cout << "not found " <<endl;
    }
    return 0;
}