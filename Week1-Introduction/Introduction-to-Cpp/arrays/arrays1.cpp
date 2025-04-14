#include <iostream>
using namespace std;

int main(){
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0] << "\n";
    cout << cars[1] << "\n";
    cout << cars[2] << "\n";
    cout << cars[3] << "\n";
    cout << "The size of the array is: " << sizeof(cars)/sizeof(cars[0]) << "\n";
    cout << "The size of the first element is: " << sizeof(cars[0]) << "\n";


    return 0;
}
