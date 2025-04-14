#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << (2 + 3 * 4) << endl; // 14
    cout << (2 + 3) * 4 << endl; // 20
    cout << pow(2, 10) << endl; // 1024
    
    cout << float(6) / 3 << endl; // 2
    
    cout << float(7) / 3 << endl; // 2.33333
    cout << 7 / 3 << endl; // 2
    cout << 7 % 3 << endl; // 1

    cout << float(3) / 6 << endl; // 0.5
    cout << 3 / 6 << endl; // 0
    cout << 3 % 6 << endl; // 3

    cout << pow(2, 100) << endl; // 1267650600228229401496703205376
    return 0;
}
