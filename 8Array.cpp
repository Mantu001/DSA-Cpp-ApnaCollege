// #include <iostream>
// using namespace std;

// int main() {
//     int roll_no[3];
//     cout << "Enter the number: "<<endl;
//     for (int i=0; i<3; i++){
//         cin>> roll_no[i];
//     }
//     cout << "you have entered :-" << endl;
//     for (int i=0; i<3; i++){
//         cout<< roll_no[i]<< endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[200] = { 32,53,64,48,42};
//     for (int i=0; i<10; i++){
//         cout<< arr[i]<<endl;
//     }
//     return 0;
// }


// // Finding Smallest/largest number
// #include <iostream>
// using namespace std;
// int main() {
//     int smallest = INT16_MAX;  // here INT16_MAX is the plus infinity while INTMIN is the minus infinity
//     int largest = INT16_MIN;
//     int smallest_index = -1;
//     int largest_index = -1;
//     int arr[] = {23,64,13,68,9,53,25};
//     int size = sizeof(arr)/sizeof(int);
//     for (int i=0; i<size; i++){
//         if (arr[i] < smallest){
//             smallest = arr[i];
//             smallest_index = i;
//         }
//         if (arr[i] > largest){
//             largest = arr[i]; 
//             largest_index = i;
//         }
//     }

//     cout << "smallest : " << smallest << " at index " << smallest_index << endl ;
//     cout << "largest : " << largest << " at index " << largest_index << endl ;
//     return 0;
// }

/******************************************************************************* */
// // Linear Search
// #include <iostream>
// using namespace std;
// int linearSearch (int arr[], int size, int key){
//     for (int i=0; i<size; i++){
//         if (arr[i] == key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main() {
//     int marks[] = { 35,89,30,99,86};
//     int target = 99;
//     int size = sizeof(marks) / sizeof(int);
//     cout << "the index of target is " << linearSearch(marks, size, target) << endl;
//     cout << "The number is "<< marks[linearSearch(marks,size, target)] << endl;
//     return 0;
// }

/***************************************************************************************************** */

// //Reversing an array 
// #include <iostream>
// using namespace std;
// int RevArray (int arr[], int size){
//     for (int i=0; i<size; i++){
//         int temp = arr[i];
//             arr[i] = arr[size-1];
//             arr[size-1] = temp;
//             size -=1;
//     }
// }
// int main() {
//     int num[] = { 1,2,3,4,5,6,7,8,9};
//     int size = sizeof(num) / sizeof(int);
//     RevArray (num, size);
//     for (int i=0; i<size; i++){
//         cout << num[i];
//     }
//     return 0;
// }

/************************************************************************** */

// // Reversing an array (two pointer approach)
// #include <iostream>
// using namespace std;

// void ReverseArray (int arr[], int size){
//     int start = 0;
//     int end = size-1;
    
//     while (start < end){
//         swap (arr[start], arr[end]);
//         start ++;
//         end --;
//     }
// }
// int main() {
//     int num[] = {1,2,3,4,5,6,7,8,9};
//     int size = sizeof(num) / sizeof(int);
    
//     ReverseArray (num, size);

//     for (int i=0; i<size; i++){
//         cout << num [i] ;
//     }
//     return 0;
// }

/******************************************************************************* */

// // Sum and product of all number of array and other functions
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int SumOfArray (int arr[], int size){
//     int sum = 0;
//     for (int i=0; i<size; i++){
//         sum += arr[i];
//     }
//     return sum;
// }

// int ProductOfArray (int arr[], int size){
//     int product = 1;
//     for (int i=0; i<size; i++){
//         product *= arr[i];
//     }
//     return product;
// }

// void SwapMaxwithMin (int arr[], int size){
//     int *maxptr = max_element( arr, arr+size);
//     int *minptr = min_element( arr, arr+size);
//     swap (*maxptr, *minptr);
// }

// int main() {
//     int num[] = { 2,3,4,1 };
//     int size = sizeof(num) / sizeof(int);
//     cout << "The sum is: "<< SumOfArray(num, size) << endl;
//     cout << "The product is: "<< ProductOfArray(num, size) << endl;
//     SwapMaxwithMin (num, size);
//     for (int i=0; i<size; i++){
//         cout << num[i];
//     }
//     return 0;
// }

/***************************************************************************************** */

// // Unique number in an array
// #include <iostream>
// using namespace std;

// void PrintUnique (int arr[], int size){
//     for (int i=0; i<size; i++){
//         bool isUnique = true;
//         for (int j=0; j<size; j++){
//             if (arr[i] == arr[j] && i != j){
//                 isUnique = false;
//                 break;
//             }
//         }
//         if (isUnique){
//             cout << arr[i] ;
//         }
//     }
// }
// int main() {
//     int arr[] = {4, 5, 9, 4, 6, 7, 9, 8, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << "Unique elements: ";
//     PrintUnique(arr, size);
//     return 0;
// }

/************************************************************************ */

// Intersection of two array
#include <iostream>
using namespace std;

void intersectionArray (int arr1[], int arr2[], int s1, int s2){
    for (int i=0; i<s1; i++){
                bool isCommon = false;
                for (int j=0; j<s2; j++){
                    if (arr1[i] == arr2[j]){
                        isCommon = true;
                        break;
                    }
                }
                if (isCommon){
                    cout << arr1[i] ;
                }
            }
        }

int main() {
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {4,5,6,7,8};
    int s1 = sizeof(arr1) / sizeof(arr1[0]);
    int s2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Intersection of elements: ";
    intersectionArray(arr1, arr2, s1, s2);
    return 0;
}