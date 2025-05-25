#include <iostream>
using namespace std;

int fib(int n){
    if(n<=0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}



int main(){
    int num;
    cout << "Type a Number to Get Fibonacci: ";
    cin >> num;
    int fibbonaccinumber = fib(num);
    cout << "Fibonacci Number of " << num << " is: " << fibbonaccinumber << endl;
    return 0;
}
