
// // Decimal to Binary conversion
// #include <iostream>
// using namespace std;
//     int Dec_to_Bin (int n){
//         int rem, ans = 0, pow = 1;
//         while (n>0){
//             rem = n%2;
//             n /= 2;
//             ans += rem*pow;
//             pow *= 10;
//         }
//         return ans;
//     }
// int main() {
//     for (int i=1; i<=10; i++){
//         cout << Dec_to_Bin(i) << endl;
//     }
//     return 0;
// }

// // Binary to Decimal Conversion
// #include <iostream>
// using namespace std;
//     int Bin_to_Dec(int BiNum){
//         int pow = 1,ans = 0;
//         while (BiNum > 0){
//         int digit = BiNum % 10;
//         BiNum /= 10;
//         ans = ans + (digit * pow);
//         pow *= 2;
//         }
//         return ans;
//     }
// int main() {
//     cout << Bin_to_Dec (131) << endl;
//     return 0;
// }

// // Bitwise problem 
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 6, b = 10;
//     cout << "bitwise AND " << (a & b) << endl;
//     cout << "bitwise OR " << (a | b) << endl;
//     cout << "bitwise XOR " << (a ^ b) << endl;
//     cout << "bitwise Left shift " << (10 << 2) << endl;
//     cout << "bitwise Right shift " << (10 >> 1) << endl;
//     return 0;
// }

// // Printing sizes of different data types
// #include <iostream>
// using namespace std;

// int main() {
//     cout << sizeof (int) << endl;
//     cout << sizeof (long int) << endl;
//     cout << sizeof (short int) << endl;
//     cout << sizeof (long long int) << endl;
//     cout << sizeof (signed int) << endl;
//     cout << sizeof (unsigned int) << endl;
//     return 0;
// }

// // Finding that number is power of 2 wihiout without loop
// #include <iostream>
// using namespace std;
//     void Pow_of_2(int num){
//         if ( (num == 1) && (num % 10 == 0)){
//             cout << "This number is the power of 2"<< endl;
//         }
//         else{
//             cout << " This number is not the power of 2 "<< endl;
//         }
//     }
// int main() {
//     int n = 45;
//     int ans = Pow_of_2(n);
//     cout << ans;
//     return 0;
// }