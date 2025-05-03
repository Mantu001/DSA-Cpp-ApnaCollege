// #include <iostream>
// using namespace std;

// void printFumction(){
//     cout << "hello\n";
// }

// int main() {
//     for (int i=0; i<5; i++){
//         printFumction();
//     }
//     return 0;
// }

/************************************************************ */

// #include <iostream>
// using namespace std;

// int sum (int a, int b){
//     return a+b;
// }
// int main() {
//     int a,b ;
//     cout << "Enter the number 1\n";
//     cin >> a;
//     cout << "Enter the number 2\n";
//     cin >> b;

//     cout << "The sum is " << sum(a,b);
//     return 0;
// }
/****************************************************************** */

// // Minimum of two number
// #include <iostream>
// using namespace std;

// int minNum(int a, int b){ // this is parameter
//     if (a<b){
//         return a;
//     }else {
//         return b;
//     }
// } 
// int main() {
//     int a=51, b=21;  // actual value is argument 
//     cout << "Min is " << minNum(a,b);
//     return 0;
// }

/************************************************************************* */

// // faztorial of N number
// #include <iostream>
// using namespace std;

// int fact(int n, int f=1){
//     for (int i=1; i<=n; i++){
//         f *= i;
//     }
//     return f;
// }
// int main() {

//     cout << "The Factorial is : " << fact(12) << endl;
//     cout << "The Factorial is : " << fact(5) << endl;
//     cout << "The Factorial is : " << fact(7) << endl;
//     cout << "The Factorial is : " << fact(4) << endl;

//     return 0;
// }
/********************************************************************************** */

// // Sum of digit of a Number
// #include <iostream>
// using namespace std;

// int main() {
//     int n, d; 
//     int sum = 0;
//     cout << "Enter the number " <<endl;
//     cin >> n;
//     while (n > 0){
//         d = n%10;
//         sum += d;
//         n /= 10;
//     }
//     cout << "The sum is "<< sum <<endl;
//     return 0;
// }

/********************************************************************** */

// // finding value of nCr

// #include <iostream>
// using namespace std;

// int factorial (int n){
//     int fact = 1;
//     for (int i=1; i<=n; i++){
//         fact *= i;
//     }
//     return fact;
// }

// int nCr (int n, int r){
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_nmr = factorial(n-r);
//     return fact_n / (fact_r * fact_nmr);
// }

// int main() {
//     int n, r;
//     cout << "Enter the vlaue of n: "<< endl;
//     cin >> n;
//     cout << "Enter the vlaue of r: "<< endl;
//     cin >> r;
//     cout << "The solution of nCr is :" << nCr(n, r);
//     return 0;
// }

/******************************************************************************************* */