#include <iostream>
#include <vector>
#include <sstream>
#include <chrono>
#include <random>
#include <algorithm>
#include <iomanip>

void insertionSort(std::vector<int>& arr) {
    for (size_t index = 1; index < arr.size(); ++index) {
        int temp = arr[index];
        int pos = index - 1;
        
        while (pos >= 0 && arr[pos] > temp) {
            arr[pos + 1] = arr[pos];
            --pos;
        }
        arr[pos + 1] = temp;
    }
}

void bubbleSort(std::vector<int>& arr) {
    for (size_t j = 0; j < arr.size() - 1; ++j) {
        bool swapped = false;
        for (size_t i = 0; i < arr.size() - j - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void optimizedBubbleSort(std::vector<int>& arr) {
    size_t size = arr.size();
    bool flag;
    
    for (size_t i = 0; i < size - 1; ++i) {
        flag = false;
        for (size_t j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (!flag) {
            break;
        }
    }
}

void selectionSort(std::vector<int>& arr) {
    for (size_t j = arr.size() - 1; j > 0; --j) {
        size_t maxIndex = j;
        for (size_t i = 0; i < j; ++i) {
            if (arr[i] >= arr[maxIndex]) {
                maxIndex = i;
            }
        }
        std::swap(arr[j], arr[maxIndex]);
    }
}

void measureSortingTime(void (*sortFunction)(std::vector<int>&), std::vector<int> arr, const std::string& name) {
    auto start = std::chrono::high_resolution_clock::now();
    sortFunction(arr);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << name << " took " << std::fixed << std::setprecision(6) << duration.count() << " seconds" << std::endl;
}

int main() {
    std::vector<int> sizes = {100, 500, 1000, 5000, 10000};
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 10000);

    for (int size : sizes) {
        std::vector<int> arr(size);
        for (int& num : arr) {
            num = dist(gen);
        }

        std::cout << "Array size: " << size << std::endl;
        measureSortingTime(bubbleSort, arr, "Bubble Sort");
        measureSortingTime(optimizedBubbleSort, arr, "Optimized Bubble Sort");
        measureSortingTime(selectionSort, arr, "Selection Sort");
        measureSortingTime(insertionSort, arr, "Insertion Sort");
        std::cout << std::endl;
    }
    
    return 0;
}