// Valid Plaindrome 
#include <iostream>
#include <string>
using namespace std;
bool validPalindrome (string &str){
    int st = 0, end = str.length()-1;
    while (st <= end){
        if (str[st] == str[end]){
            st ++;
            end --;
        }
        else {
            return false;
        }
    }
    return true;
}
int main() {
    string str = "ab5ba";
    if (validPalindrome(str)){
        cout << "This is a valid Plaindrome" <<endl;
    }
    else {
        cout << "invalid Plaindrome" <<endl;
    }
    return 0;
}


// remove all occurance is solve on leetcode problem no 1910