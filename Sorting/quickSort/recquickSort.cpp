#include <iostream>
#include <vector>
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

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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
        quickSort(numbers, 0, numbers.size() - 1);
        
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