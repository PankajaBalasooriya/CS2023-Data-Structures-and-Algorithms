#include <iostream>
using namespace std;

// Function declaration
int max(int num1, int num2);

int main(){
    // Local variable declaration
    int a = 100, b = 200;
    int ret;

    // calling a dunction to get max value.
    ret = max(a, b);
    cout << "Max value is : " << ret << endl;
    return 0;
}

// Function definition
// Function that return the max between the two numbers
int max(int num1, int num2){
    // Local variable declaration
    int result;

    if(num1 > num2)
        result = num1;
    else
        result = num2;

    return result; // return the max value
}