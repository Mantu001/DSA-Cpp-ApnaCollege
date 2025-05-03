// // Checking Number is prime or not
// #include <iostream>
// using namespace std;
// string isPrime (int num){
//     for (int i=2; i*i<=num; i++){
//         if (num % i == 0){
//             return "Non Prime";
//         }
//     }
//     return "prime";
// }
// int main() {
//     int n = 4;
//     cout << isPrime (n);
//     return 0;
// }


// // Digits in a number
// #include <iostream>
// #include <cmath>
// using namespace std;
// int countDigit (int n){
//     int count = 0;
//     while (n != 0){
//         count ++;
//         n /= 10;
//     }
//     return count;
// }
// int main() {
//     int n = 23344;
//     cout << "Digit in given number is : " << countDigit(n)<<endl;
//     cout << "shortcut method " << (int)(log10(n) + 1) << endl; // shortcut formula
//     return 0;
// }


// // Armstrong number
// #include <iostream>
// using namespace std;
// bool isArmstrong (int n){
//     int copyN = n;
//     int sumOfCubes = 0;
//     while (n != 0){
//         int digit = n%10;
//         sumOfCubes += (digit * digit * digit);
//         n /= 10;
//     }
//     return sumOfCubes == copyN;
// }
// int main() {
//     int n = 371;
//     if (isArmstrong(n)){
//         cout << "This is Armstrong NUmber";
//     }
//     else {
//         cout << " NOt an armstrong ";
//     }
//     return 0;
// }


// // Greatest common divisor 
// #include <iostream>
// using namespace std;
// int gcd (int a, int b){
//     while (a > 0 && b > 0){
//         if (a>b){
//             a %= b;
//         }
//         else {
//             b %= a;
//         }
//     }
//     if (a==0){
//         return b;
//     }
//     else {
//         return a;
//     }
// }
// int lcm (int x,int y){
//     int gcdval = gcd(x,y);
//     return (x*y)/gcd(x,y);
// }
// int main() {
//     int a = 20, b = 28;
//     cout << "GCD is : " << gcd(a,b) << endl;
//     cout << "LCM is : " << lcm(a,b) << endl;
//     return 0;
// }


// // reverse numver
// #include <iostream>
// using namespace std;
// int reverse (int num){
//     int revNum = 0;
//     while (num != 0){
//         int dig = num % 10;
//         revNum = (revNum * 10) + dig;
//         num /= 10;
//     }
//     return revNum;
// }
// int main() {
//     int n = 345;
//     cout << "reverse number is : "<< reverse(n)<<endl;
//     return 0;
// }


// palindrome numver 
#include <iostream>
using namespace std;
int reverse (int num){
    int revNum = 0;
    while (num != 0){
        int dig = num % 10;
        revNum = (revNum * 10) + dig;
        num /= 10;
    }
    return revNum;
}
int main() {
    int n = 343;
    if (reverse(n) == n){
        cout << "This is Palindrome " <<endl;
    }
    else cout << " Not Palindrome " <<endl;
    return 0;
}