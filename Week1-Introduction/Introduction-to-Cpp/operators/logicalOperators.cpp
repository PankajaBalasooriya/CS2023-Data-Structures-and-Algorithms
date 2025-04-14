#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int y = 3;

    cout << (x > 3 && x < 10) << endl;
    cout << (x >3 || x < 4) << endl;
    cout << (!(x > 3 && x < 10)) << endl;
    return 0;
}
