// //character array
// #include <iostream>
// using namespace std;
// int main() {
//     // char str[] = {'m', 'a', 'n','t','u', \0};
//     char str[] = "mantu";
//     string s = "mantu";
//     cout << str << "  "<<endl;
//     cout << s << "  "<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     char str[12];
//     cout << "Enter String "<<endl;
//     cin.getline(str, 100);  // this print the total space
//     // cin >> str;  // this will only print word before space
//     for (char ch : str){
//         cout << ch << "  ";
//     }
//     cout << "Output " << str <<endl;
//     return 0;
// }


// // string (isko implement karna simple hai)
// #include <iostream>
// using namespace std;
// int main() {
//     string s = "mantu kumar tiwari";
//     string s1 = "Mantu";
//     string s2 = "Tiwari";
//     string s3 = s1 + s2;
//     cout << s << endl;
//     cout << s3 << endl;
//     return 0;
// }


// // loop in string 
// #include <iostream>
// using namespace std;
// int main() {
//     string str = " Piyush Hardware and tools";
//     // getline (cin , str);
//     // cout << str;
//     for (int i=0; i<str.length(); i++){  // we can also use for (int val : str)
//         cout <<str[i] << "" ;
//     }
//     return 0;
// }


// // Reverse a string
// #include <iostream>
// #include <string>
// using namespace std;
// void revString (string &str){
//     int st = 0, end = str.length()-1;
//     while (st <= end){
//         swap (str[st], str[end]);
//         st++;
//         end--;
//     }
// }
// void printString (string str){
//     for (int i=0; i<str.length(); i++){
//         cout << str[i] ;
//     }
// }
// int main() {
//     string str = "Mantu";
//     // int n = str.length();
//     revString (str);
//     printString (str);
//     return 0;
// }



