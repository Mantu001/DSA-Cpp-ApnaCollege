
// // Recursion (basic example for printing value from n-1)
// #include <iostream>
// using namespace std;
// void printNum(int n){
//     if (n == 1){
//          cout << "1" << endl;
//          return;
//     }
//     cout << n << " ";
//     printNum(n-1);
// }
// int main() {
//     printNum(10);
//     return 0;
// }


// // Factorial using recurssion 
// #include <iostream>
// using namespace std;
// int fact(int n) {
//     if (n == 0){
//         return 1;
//     }
//     return n * fact(n-1);
// }
// int main() {
//     int factorial = fact(5);
//     cout << factorial << endl;
//     return 0;
// } 


// sum of n nums using recursion
#include <iostream>
using namespace std;
int sumN(int n){
    if (n == 1){
        return 1;
    }
    return n + sumN(n-1);
}
int main() {
    cout << "the sum of n Number is : " << sumN(4);
    return 0;
}