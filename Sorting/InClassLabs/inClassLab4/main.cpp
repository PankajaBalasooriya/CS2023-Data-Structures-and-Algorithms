#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>
#include <iomanip>
#include <stack>

using namespace std;
using namespace chrono;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void quickSortWrapper(vector<int>& arr) {
    quickSort(arr, 0, arr.size() - 1);
}

void itr_quickSort(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return;
    
    stack<int> stk;
    int low = 0;
    int high = n - 1;
    
    stk.push(low);
    stk.push(high);
    
    while (!stk.empty()) {
        high = stk.top();
        stk.pop();
        low = stk.top();
        stk.pop();
        
        int pivot = partition(arr, low, high);
        
        if (pivot - 1 > low) {
            stk.push(low);
            stk.push(pivot - 1);
        }
        
        if (pivot + 1 < high) {
            stk.push(pivot + 1);
            stk.push(high);
        }
    }
}

void measureSortingTime(void (*sortFunction)(vector<int>&), vector<int> arr, const string& name) {
    auto start = high_resolution_clock::now();
    sortFunction(arr);
    auto end = high_resolution_clock::now();
    duration<double> duration = end - start;
    cout << name << " took " << fixed << setprecision(6) << duration.count() << " seconds" << endl;
}

int main() {
    vector<int> sizes = {100, 500, 1000, 5000, 10000, 100000, 1000000};
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100000);

    for (int size : sizes) {
        vector<int> arr(size);
        for (int& num : arr) {
            num = dist(gen);
        }
        
        vector<int> arr1 = arr;  // Copy for non-iterative quicksort
        vector<int> arr2 = arr;  // Copy for iterative quicksort

        cout << "Array size: " << size << endl;
        measureSortingTime(quickSortWrapper, arr1, "Non-iterative Quick Sort");
        measureSortingTime(itr_quickSort, arr2, "Iterative Quick Sort");
        cout << endl;
    }

    return 0;
}