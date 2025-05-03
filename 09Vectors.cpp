// 1st method to initialize vector
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector <int> vec;  // initialization of vector
//     return 0;
// }

// 2nd method to initialize vector
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector <int> vec = { 34,64,76,86,43};
//     cout << vec[0] <<endl;
//     cout << vec[1] <<endl;
//     cout << vec[2] <<endl;
//     cout << vec[3] <<endl;
//     return 0;
// }

// 3rd method to initialize vector
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector <int> vec (4, 83);
//     cout << vec [0] << endl;
//     cout << vec [1] << endl;
//     cout << vec [2] << endl;
//     cout << vec [3] << endl;
//     return 0;
// }

// // Printing value of vectors
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector <int> vec = {1, 3, 6, 7, 3};
//     for (int val : vec){
//         cout << val << endl;
//     }
//     return 0;
// }


// // vector functions
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector <int> num = {12,43,37};
//     cout << num.size() <<endl;
//     num.push_back(45) ;
//     cout << "size after pushing is " << num.size() <<endl;
//     for (int n : num){
//         cout << n << endl;
//     }
//     num.pop_back();
//     cout << "size after pushing is " << num.size() <<endl;
//     for (int n : num){
//         cout << n << endl;
//     }
//     cout << "Front value : "<< num.front() << endl; 
//     cout << "back value : "<< num.back() << endl; 
//     return 0;
// }

// // Size and capacity concept
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector <int> num;
//     num.push_back(23);
//     num.push_back(2);
//     num.push_back(3);
//     num.push_back(231);
//     num.push_back(231);
//     cout << "size : " << num.size() << endl;
//     cout << "capacity : " << num.capacity() << endl;
//     return 0;
// }

// //Finding single number using array
// #include <iostream>
// using namespace std;
// int singleNumber (int arr[], int size){
//     int start = 0; 
//     int end = size-1;
//     int single = 0;
//     for (int i=0; i<size; i++){
//         single ^= arr[i];
//     }
//     return single;
// }
// int main() {
//     int arr[] = {4,1,2,1,2};
//     int size = sizeof(arr) / sizeof(0);
//     cout << "The single Number is : "<< singleNumber (arr, size);
//     return 0;
// }


// //Finding single number using vector
// #include <iostream>
// #include <vector>
// using namespace std;
// int singleNumber (vector<int> arr){
//     // int start = 0; 
//     // int end = size-1;
//     int single = 0;
//     for (int i : arr){
//         single ^= i;
//     }
//     return single;
// }
// int main() {
//     vector<int> arr = {4,1,2,1,2,4,7};
//     // int size = sizeof(arr) / sizeof(0);
//     cout << "The single Number is : "<< singleNumber (arr);
//     return 0;
// }


// Linear Search using vector
#include <iostream>
#include <vector>
using namespace std;
bool linearSearch ( vector<int> vec, int key){
    for (int i : vec){
        if (i == key){
            return true;
            break;
        }
    }
    return false;
}
int main() {
    vector<int> num = {23,54,37,34};
    int key = 372;
    if (linearSearch (num, key)){
        cout << "Key found "<< endl;
    }
    else {
        cout << " not found " <<endl;
    }
    return 0;
}