// // Printing Prime number (not optimised  O(n))
// #include <iostream>
// using namespace std;
// bool primeNumber (int num){
//     for (int i=2; i<num; i++){
//         if (num%i == 0){
//             return true;
//             break;
//         }
//         else {
//             return false;
//         }
//     }
// }
// int main() {
//     int n = 11;
//     if (primeNumber(n)){
//         cout << "This is Prime Number " <<endl;
//     }
//     else {
//         cout << "NOt a prime number "<<endl;
//     }
//     return 0;
// }


// Printitng Prime (optimised  O(root n))
#include <iostream>
using namespace std;
int main() {
    int num = 45;
    for (int i=2; i*i <= num; i++){
        if (num % i == 0){
            cout << "not prime" <<endl;
            break;
        }
        else {
            cout << " Prime "<<endl;
            break;
        }
    }
    return 0;
}
