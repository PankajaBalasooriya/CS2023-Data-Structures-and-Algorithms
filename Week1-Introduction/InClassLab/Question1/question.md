
# Using `if` and `else` in C/C++

`if` and `else` are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements. We use them in the following ways:

### `if` Statement

This executes the body of bracketed code starting with `if` when the condition evaluates to `true`.

```cpp
if (condition) {
    statement1;
    ...
}
```

### `if - else` Statement

This executes the body of bracketed code starting with `if` when the condition evaluates to `true`, or it executes the body of code in `else` when the condition evaluates to `false`. Note that only one of the bracketed code sections will ever be executed.

```cpp
if (condition) {
    statement1;
    ...
}
else {
    statement2;
    ...
}
```

### `if - else if - else` Statement

In this structure, dependent statements are chained together, and each condition is only checked if all prior conditions in the chain evaluated to `false`. Once a condition evaluates to `true`, its associated block is executed and the program skips the rest of the chain.

```cpp
if (first condition) {
    ...
}
else if (second condition) {
    ...
}
...
else if ((n-1)'th condition) {
    ...
}
else {
    ...
}
```

---

## Problem

Given a positive integer `n`, do the following:

- If `1 <= n <= 9`, print the lowercase English word corresponding to the number (e.g., `one` for 1, `two` for 2, etc.).
- If `n > 9`, print `Greater than 9`.

### Input Format

A single integer `n`.

### Constraints

- `1 <= n <= 10^9`

### Output Format

- If `1 <= n <= 9`, print the lowercase English word corresponding to the number (e.g., `one` for 1, `two` for 2, etc.).
- Otherwise, print `Greater than 9`.

---

## Sample Inputs and Outputs

| Input | Output         |
|-------|----------------|
| 5     | five           |
| 8     | eight          |
| 44    | Greater than 9 |

### Explanation

- **Input:** `5`  
  **Output:** `five`  
  **Reason:** `five` is the English word for the number 5.

- **Input:** `8`  
  **Output:** `eight`  
  **Reason:** `eight` is the English word for the number 8.

- **Input:** `44`  
  **Output:** `Greater than 9`  
  **Reason:** `44` is greater than 9, so we print `Greater than 9`.

---
