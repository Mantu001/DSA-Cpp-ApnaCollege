// // Memery address
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 34;
//     int* ptr1 = &a; 
//     int** ptr2 = &ptr1;
//     cout << &a<< endl;      // here &a and ptr1 both are same
//     cout << ptr1 <<endl;
//     cout << &ptr1 <<endl;   // here &ptr1 and ptr2 both are same
//     cout << ptr2 << endl;
//     // dereference operator (value at adress)
//     cout << *(&a) << endl;
//     cout << *(ptr1) << endl;
//     cout << *(ptr2) << endl;
//     cout << **(ptr2) << endl;
//     // NULL pointer
//     int *x = NULL;
//     cout << x <<endl; 
//     return 0;
// }


// // pass by reference
// #include <iostream>
// using namespace std;
// void changeA(int *ptr){
//     *ptr = 53;
// }
// int main() {
//     int a = 12;
//     cout << " befor " << a <<endl;
//     changeA(&a);
//     cout << " after " << a << endl;
//     return 0;
// }


// // Array pointer
// #include <iostream>
// // #include <vector>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5};
//     cout << arr <<endl;
//     cout << *arr <<endl;
//     cout << &arr <<endl;
//     cout << &arr[0] <<endl;
//     cout << &arr[1] <<endl;
//     cout << "Printing addres of each value "<<endl;
//     for (int i=0; i<5; i++){
//         cout << &arr[i] <<endl;
//     }
//         return 0;
// }


// Arithmitic operation
#include <iostream>
using namespace std;
int main() {
    int a= 20;
    int *ptr = &a;
    cout << ptr <<endl;
    ptr++;
    cout << ptr <<endl;
    return 0;
}