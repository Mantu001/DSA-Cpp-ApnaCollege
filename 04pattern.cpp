// #include <iostream>
// using namespace std;

// int main() {

//     int n = 8;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<n-i-1; j++){
//             cout << " ";
//         }
//         for (int j=0; j<i+1; j++){
//             cout << j+1 ;
//         }
//         for (int j=i; j>0; j--){
//             cout << j ;
//         }
//         cout << endl;
//     }
    
//     return 0;
// }
/* ***********************************************************************************************/
// // buttery fly pattern
// #include <iostream>
// using namespace std;

// int main() {
    
//     // for top pattern
//     int n = 4;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<i+1; j++){
//             cout << "*";
//         }
//         for (int j=0; j<2*(n-i-1); j++){
//             cout << " ";
//         }
//         for (int j=0; j<i+1; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     // for bottom pattern
//     for (int i=n-1; i>=0; i--){
//         for (int j=0; j<=i; j++){
//             cout << "*";
//         }
//         for (int j=0; j<2*(n-i-1); j++){
//             cout << " ";
//         }
//         for (int j=0; j<=i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }