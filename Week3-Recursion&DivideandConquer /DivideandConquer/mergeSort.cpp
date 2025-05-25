#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Merge(int arr[], int left, int middle, int right){
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // create temperary arrays
    int leftarray[n1]; int rightarray[n2];

    // copy data in to temp array
    for(int i = 0; i < n1; i++){
        leftarray[i] = arr[left + i];
    }
    for(int i = 0; i < n2; i++){
        rightarray[i] = arr[middle + 1 + i];
    }

    int i =0; int j = 0; int k = left;


    while(i < n1 && j < n2){
        if(leftarray[i] <= rightarray[j]){
            arr[k] = leftarray[i];
            i++;
        }
        else{
            arr[k] = rightarray[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = leftarray[i];
        i++; k++;
    }
    while(j < n2){
        arr[k] = rightarray[j];
        j++; k++;
    }
}

void MergeSort(int arr[], int left, int right){
    if(left < right){
        // Calculate middle point
        int middle = left + (right - left) / 2;

        MergeSort(arr, left, middle);
        MergeSort(arr, middle + 1, right);

        Merge(arr, left, middle, right);
    }
}





int main(){
    int size;
    
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    
    cout << "Enter " << size << " elements separated by spaces: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    MergeSort(arr, 0, size - 1);

    printArray(arr, size);
    
    return 0;
}
