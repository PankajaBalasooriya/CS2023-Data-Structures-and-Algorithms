#include <iostream>
using namespace std;

int main(){
    
    for(int i = 0; i < 5; i++){
        cout << i << "\n";
    }

    cout << "------------------------------" << endl;

    int myNumbers[5] = {10, 20, 30, 40, 50};

    for(int i: myNumbers){
        cout << i << "\n";
    }
    
    return 0;
}
