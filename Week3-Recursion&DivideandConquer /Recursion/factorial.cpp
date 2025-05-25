#include <iostream>
using namespace std;

int fact(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return n * fact(n - 1);
    }
}


int main(){
    int num;
    cout << "Type a Number to Get Factorial: ";
    cin >> num;
    int factorial = fact(num);
    cout << "Factorial of " << num << " is: " << factorial << endl;
    return 0;
}
