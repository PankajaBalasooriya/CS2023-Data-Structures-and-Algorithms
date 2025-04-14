#include <iostream>
using namespace std;

int main(){
    
    int i = 0;
    // while loop
    while (i < 5) {
        cout << "Hello World!" << endl;
        i++;
    }

    // do while loop
    int j = 0;
    do{
        cout << j << "\n";
        j++;
    }
    while (j < 5);

    // Nested Loops
    // outer loop
    for(int i = 1; i <= 2; ++i){
        cout << "Outer: " << i << "\n";

        // inner loop
        for(int j = 1; j <= 3; ++j){
            cout << "Inner: " << j << "\n";
        }
    }
    
    
    
    return 0;
}
