// // reverse word in a string  (wrong)
// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// string revString (string &str){
//     int n = str.length();
//     string ans = "";
//     reverse (str.begin(), str.end());
//     for (int i=0; i<n; i++){
//         string word = "";
//         while ( i<n && str[i] != ' '){
//             word += str[i];
//             i++;
//         }
//         reverse (word.begin(), word.end());
//         if (word.length() > 0){
//             ans += " " + word;
//         }
//     }
//     return ans.substr(1);
// }
// int main() {
//     string s = "My name is Mantu";
//     int n = s.length();
//     revString (s);
//     for (int i=0; i<n; i++){
//         cout << s[i] << " ";
//     }
//     return 0;
// }


// correct code from chat gpt (reverse word in a string)
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string revString(string str) {
    int n = str.length();
    string ans = "";
    
    // Reverse the whole string
    reverse(str.begin(), str.end());

    for (int i = 0; i < n; i++) {
        string word = "";
        
        // Skip spaces
        while (i < n && str[i] == ' ') i++;

        // Form a word
        while (i < n && str[i] != ' ') {
            word += str[i];
            i++;
        }

        // Reverse the word and add to answer
        reverse(word.begin(), word.end());
        if (!word.empty()) {
            if (!ans.empty()) ans += " ";
            ans += word;
        }
    }
    return ans;
}

int main() {
    string s = "My name is Mantu";
    string reversed = revString(s);
    cout << reversed << endl;
    return 0;
}
