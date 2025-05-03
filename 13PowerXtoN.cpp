// Power of X to n
#include <iostream>
using namespace std;
int power (int x, int n){
    int p=1;
    for (int i=0; i<n; i++){
        p *= x;
    }
    return p;
}
int main() {
    cout << "power is " << power(2,3);
    return 0;
}