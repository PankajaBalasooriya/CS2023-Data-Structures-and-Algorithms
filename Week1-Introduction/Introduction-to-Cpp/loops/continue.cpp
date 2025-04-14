#include <iostream>
using namespace std;

int main(){
    int i = 0;

    while(i <10){
        if(i == 4){
            i++;
            continue; // Skip the rest of the loop when i is 4
        }
        cout << i << "\n";
        i++;
    }
    
    return 0;
}
