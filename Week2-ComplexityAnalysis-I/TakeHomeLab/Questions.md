* **Question 1: Insertion Sort Part 1**
    Given a sorted list with an unsorted number e in the rightmost cell, can you write some simple code to insert e into the array so that it remains sorted?
    * **Function Description:** Complete the `insertionSort1` function in the editor below.
        * `n`: an integer, the size of `arr`
        * `arr`: an array of integers to sort
    * **Returns:** None: Print the interim and final arrays, each on a new line. No return value is expected.
    * **Input Format:** The first line contains the integer `n`, the size of the array `arr`. The next line contains `n` space-separated integers `arr[0]..arr[n-1]`.
    * **Constraints:**
        * $1 \le n \le 1000$
        * $-10000 \le arr[i] \le 10000$
    * **Output Format:** Print the array as a row of space-separated integers each time there is a shift or insertion.

* **Question 2: Insertion Sort Part 2**
    In Insertion Sort Part 1, you inserted one element into an array at its correct sorted position. Using the same approach repeatedly, can you sort an entire array?
    * **Guideline:** You already can place an element into a sorted array. How can you use that code to build up a sorted array, one element at a time?
    * **Note:** In the first step, when you consider an array with just the first element, it is already sorted since there's nothing to compare it to. In this challenge, print the array after each iteration of the insertion sort, i.e., whenever the next element has been inserted at its correct position. Since the array composed of just the first element is already sorted, begin printing after placing the second element.
    * **Function Description:** Complete the `insertionSort2` function in the editor below.
        * `int n`: the length of `arr`
        * `int arr[n]`: an array of integers
    * **Prints:** At each iteration, print the array as space-separated integers on its own line.
    * **Input Format:** The first line contains an integer, `n`, the size of `arr`. The next line contains `n` space-separated integers `arr[i]`.
    * **Constraints:**
        * $1 \le n \le 1000$
        * $-10000 \le arr[i] \le 10000$, $0 \le i < n$
    * **Output Format:** Print the entire array on a new line at every iteration.

* **Question 3: Array Manipulation**
    Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.
    * **Function Description:** Complete the function `arrayManipulation` in the editor below.
        * `int n`: the number of elements in the array
        * `int queries[q][3]`: a two dimensional array of queries where each `queries[i]` contains three integers, `a`, `b`, and `k`.
    * **Returns:** `int`: the maximum value in the resultant array
    * **Input Format:** The first line contains two space-separated integers `n` and `m`, the size of the array and the number of operations. Each of the next `m` lines contains three space-separated integers `a`, `b` and `k` the left index, right index and summand.
    * **Constraints:**
        * $3 \le n \le 10^{7}$
        * $1 \le m \le 2*10^{5}$
        * $1 \le a \le b \le n$
        * $0 \le k \le 10^{9}$
    * **Sample Input:**
        ```
        5 3
        1 2 100
        2 5 100
        3 4 100
        ```
    * **Sample Output:**
        ```
        200
        ```