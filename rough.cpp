// // set (STL) practice
// #include <iostream>
// #include <set>
// using namespace std;
// int main() {
//     set<int> s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(1);
//     s.insert(3);
//     s.insert(1);
//     s.insert(4);
//     // for (int val : s){
//     //     cout << val << "  " ;
//     // }
//     if (s.find(2) != s.end()){   // this means that if this is found
//         cout << "It is found"<< endl;
//     }
//     else {
//         cout << " Not found " << endl;
//     }
//     return 0;
// }


// // Map Practice
// #include <iostream>
// #include <map>
// using namespace std;
// int main() {
//     map<int, int> age;
//     age[111] = 30;
//     age[112] = 20;
//     age[113] = 21;
//     for (auto p : age){
//         cout << p.first << " " << p.second << endl;   
//     }
//     return 0;
// }

// // set of student roll no
// #include <iostream>
// #include <set>
// using namespace std;
// int main() {
//     set<int> roll;
//     roll.insert(12);
//     roll.insert(13);
//     roll.insert(14);
//     roll.insert(12);
//     roll.insert(15);
//     roll.insert(14);
//     roll.insert(17);
//     for (auto r : roll){
//         cout << r << " ";
//     }
//     return 0;
// }

// // Student name and marks
// #include <iostream>
// #include <map>
// using namespace std;
// int main() {
//     map<string, int> marks;
//     marks["mantu"] = 47;
//     marks["rohan"] = 93;
//     marks["sohan"] = 72;
//     marks["rudra"] = 49;
//     for (auto m : marks){
//         cout << m.first << "  " << m.second << endl;
//     }
//     return 0;
// }

// // remove duplicae from array
// #include <iostream>
// #include <set>
// using namespace std;
// int main() {
//     set<int> num;
//     num = {2, 3, 2, 4, 5, 3, 5};
//     for (int val : num){
//         cout << val << "  " ;
//     }
//     return 0;
// }

// print repeated string
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    vector<string> names = {"Ram", "Shyam", "Ram", "Mohan", "Shyam", "Geeta"};
    map<string, int> count;
    for (string n : names){
        count[n]++;
    }
    cout << "Repeated Names :" << endl;
    for (auto pair : count){
        if (pair.second > 1){
            cout << pair.first << endl;
        }
    }
    return 0;
}

// // phone directory
// #include <iostream>
// #include <map>
// using namespace std;
// int main() {
//     map<string, string> phone;
//     phone["Mantu"] = "7897897895";
//     phone["rohan"] = "7897897825";
//     phone["sohan"] = "7857897895";
//     phone["Mantu"] = "7897896895";
//     for (auto val : phone){
//         cout << val.first << " and " << val.second << endl;
//     }
//     return 0;
// }

// // count unique character
// #include <iostream>
// #include <set>
// using namespace std;
// int main() {
//     string str = "mantu";
//     set<char> names;
//     for (char c : str){
//         names.insert(c);
//     }
//     cout << str.size();

//     return 0;
// }