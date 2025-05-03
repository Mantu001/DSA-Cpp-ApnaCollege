// for dimond pattern

#include <iostream>
using namespace std;

int main() {
    // for top pattern
    int n = 4;
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){ //for space
            cout << " ";
        }
        for (int j=0; j<i+1; j++){  // for star
            if (j==i){
                cout << "*";
            }   
        }
        for (int j=0; j<(2*i)-1; j++){  // for space 
            cout << " ";
        }
        for (int j=0; j<n; j++){  // for star
            if (j==i-1){
                cout << "*";
            }
        }
        cout << endl;

        // for bottom pattern
        for (int i=0; i<n-1; i++){
            for (int j=0; j<i+1; j++){  // for star
                if (j==i){
                    cout << "*";
                }   
            }
            for (int j=0; j<i+1; j++){  // for star
                if (j==i){
                    cout << "*";
                }   
            }
            for (int j=0; j<(2*i)-1; j++){  // for space 
                cout << " ";
            }
            for (int j=0; j<n; j++){  // for star
                if (j==i-1){
                    cout << "*";
                }
        }
        cout << endl;
    }
}

    return 0;


}