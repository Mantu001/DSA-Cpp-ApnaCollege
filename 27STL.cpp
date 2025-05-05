// C++ STL (Standard Tempelate library)

// // Vectors (it is similar to array but the only difference is that it allocate size during runtime) {Dynamic memory allocation}
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector<int> number ;
//     number.push_back(1);  // used to insert element
//     number.push_back(2);
//     number.push_back(3);
//     number.push_back(4);
//     number.push_back(5);
//     cout << " size of vector " << number.size() <<endl;
//     cout << " capacity of vector " << number.capacity() <<endl;
//     for (int val : number){
//         cout << val << "  ";
//     }
//     cout << endl;
//     number.pop_back(); 
//     cout << " size of vector " << number.size() <<endl;
//     cout << " capacity of vector " << number.capacity() <<endl;
//     for (int val : number){
//         cout << val << "  ";
//     }
//     cout << endl;
//     cout << " The value at index two is : " << number[2] << " or " << number.at(2) <<endl;
//     cout << " printnting front element " << number.front() << endl;
//     cout << " printnting back element " << number.back() << endl;
//     // for printing similar value upto n times (this is mostly used in dyanimc programming)
//     vector<int> num(10,5); // num (size, value)
//     for (int val : num){
//         cout << val << "  ";
//     }
//     cout << endl;
//     // using erase operation
//     number.erase(number.begin()+2);
//     for (int val : number){
//         cout << val << "  ";
//     }
//     cout << endl;
//     // Iterator in vecor (it can direct access the memory allocation)
//     vector<int> vec = {1,2,3,4,5};
//     vector<int> :: iterator i;
//     for (i=vec.begin(); i!=vec.end(); i++){
//         cout << *(i) << "  ";
//     }
//     cout << endl;
//     return 0;
// } 


// // List
// #include <iostream>
// #include <list>
// using namespace std;
// int main() {
//     list<int> lst ;
//     lst.push_back(3);
//     lst.push_front(2);
//     lst.push_front(9);
//     lst.push_back(8);
// random acces is not possibel because it is not a array it is a linked list
//     for (int val : lst){
//         cout << val << "  ";
//     }
//     return 0;
// }


// // Deque
// #include <iostream>
// #include <deque>
// using namespace std;
// int main() {
//     deque<int> dq ;
//     dq.push_back(45);
//     dq.push_front(23);
//     dq.push_front(91);
//     dq.push_front(9);
//     dq.push_front(1);
//     cout << dq[3] <<endl; // it is dynamic array that's why random acces is possible
//     for (int val : dq){
//         cout << val << "  ";
//     }
//     return 0;
// }


// // Pair 
// #include <iostream>
// using namespace std;
// int main() {
//     pair<int,int> p1 = {3,6};
//     cout << p1.first <<endl;
//     cout << p1.second <<endl;
//     pair<string,int> p2 = {"mantu", 31};
//     cout << p2.first <<endl;
//     cout << p2.second<<endl;
//     pair <int , pair<char,int>> p3 = {56, {'m',33}};
//     cout << p3.first << endl;
//     cout << p3.second.first << endl;
//     cout << p3.second.second << endl;
//     return 0;
// }


// // Stack 
// #include <iostream>
// #include <stack>
// using namespace std;
// int main() {
//     stack <int> s ;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     cout << s.top() <<endl;
//     // printing value of stack 
//     while (!s.empty()){
//         cout << s.top() << "  ";
//         s.pop();
//     }
//     cout <<endl;
//     cout << s.top() <<endl;
//     return 0;
// }


// // Queue 
// #include <iostream>
// #include <queue>
// using namespace std;
// int main() {
//     queue <int> q ;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     while (! q.empty()){
//         cout << q.front() << "  ";
//         q.pop();
//     }
//     cout << endl;
//     return 0;
// }


// // Priority Queue
// #include <iostream>
// #include <queue>
// using namespace std;
// int main() {
//     priority_queue<int> pq;
//     pq.push(4);
//     pq.push(14);
//     pq.push(7);
//     pq.push(9);
//     pq.push(2);
//     while (! pq.empty()){
//         cout << pq.top()<< " ";
//         pq.pop();
//     }
//     cout << endl;
//     return 0;
// }


// Map
#include <iostream>
#include <map> // by default it can sort our data
using namespace std;
int main() {
    map<string,int> m;
    m["TV"] = 100;
    m["Laptop"] = 10;
    m["Mobile"] = 500;
    for (auto p : m){
        cout << p.first << " " <<  p.second << endl;
    }
    return 0;
}


// // set
// #include <iostream>
// #include <set>  // it remove duplicacy of element (store unique element )
// using namespace std;
// int main() {
//     set<int> s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     for (auto val : s){
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }
