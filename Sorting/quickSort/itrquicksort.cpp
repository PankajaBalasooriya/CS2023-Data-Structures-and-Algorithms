#include <iostream>
#include <vector>
#include <stack>
#include <sstream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(std::vector<int>& arr, int low, int high) {
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

void iterativeQuickSort(std::vector<int>& arr) {
    std::stack<int> stack;
    
    int low = 0;
    int high = arr.size() - 1;
    
    stack.push(low);
    stack.push(high);
    
    while (!stack.empty()) {
        high = stack.top();
        stack.pop();
        low = stack.top();
        stack.pop();
        
        int pivot = partition(arr, low, high);
        
        if (pivot - 1 > low) {
            stack.push(low);
            stack.push(pivot - 1);
        }
 
        if (pivot + 1 < high) {
            stack.push(pivot + 1);
            stack.push(high);
        }
    }
}

int main() {
    std::string line;
    std::getline(std::cin, line);
    
    std::vector<int> numbers;
    std::istringstream iss(line);
    int num;
    
    while (iss >> num) {
        numbers.push_back(num);
    }
    
    if (!numbers.empty()) {
        iterativeQuickSort(numbers);
        
        for (size_t i = 0; i < numbers.size(); i++) {
            std::cout << numbers[i];
            if (i < numbers.size() - 1) {
                std::cout << " ";
            }
        }
    }
    
    std::cout << std::endl;
    return 0;
}