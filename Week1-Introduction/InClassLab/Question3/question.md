

# Reading Input and Printing Output in C++

## Objective

In this challenge, we practice reading input from `stdin` and printing output to `stdout`.

## Reading Input

In C++, you can read a single whitespace-separated token of input using `cin`, and print output to `stdout` using `cout`. For example:

```cpp
string s;
int n;
cin >> s >> n;
```

This reads the first word (e.g., "High") into string `s`, and the next token (e.g., "5") into integer `n`.

To print them out separated by a space:

```cpp
cout << s << " " << n << endl;
```

This would output:

```
High 5
```

## Task

Read 3 numbers from `stdin` and print their sum to `stdout`.

### Input Format

One line that contains 3 space-separated integers: `a`, `b`, and `c`.

### Constraints

- The input will consist of three integers.

### Output Format

Print the sum of the three numbers on a single line.

---

## Sample Input

```
1 2 7
```

## Sample Output

```
10
```

### Explanation

The sum of the three numbers is: `1 + 2 + 7 = 10`

---

## Example

| Input     | Result |
|-----------|--------|
| 1 2 7     | 10     |
