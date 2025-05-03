// String compression
#include <iostream>
#include <string>
using namespace std;
string strCompress (string str){
    int n = str.length();
    string result = "";
    int count = 1;
    for (int i=1; i<n; i++){
        if (str[i] == str[i-1]){
            count ++;
        }
        else {
            result += str[i-1] + to_string(count);
            count = 1;
        }
    }
    result += str[n-1] + to_string(count);
    return result;
}
int main() {
    string str = "aababbccabac";
    cout << "The vlaue of compressed string is : " <<  strCompress(str) << endl;
    return 0;
}