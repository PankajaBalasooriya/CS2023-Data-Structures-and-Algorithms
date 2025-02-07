import matplotlib.pyplot as plt


array_sizes = [100, 500, 1000, 5000, 10000]
bubble_sort_times = [0.000079, 0.001476, 0.003619, 0.099566, 0.419919]
optimized_bubble_sort_times = [0.000071, 0.001025, 0.003973, 0.101696, 0.412732]
selection_sort_times = [0.000027, 0.000246, 0.000973, 0.023222, 0.096802]
insertion_sort_times = [0.000017, 0.000191, 0.000722, 0.018063, 0.073021]


plt.figure(figsize=(10, 6))
plt.plot(array_sizes, bubble_sort_times, label='Bubble Sort', marker='o')
plt.plot(array_sizes, optimized_bubble_sort_times, label='Optimized Bubble Sort', marker='o')
plt.plot(array_sizes, selection_sort_times, label='Selection Sort', marker='o')
plt.plot(array_sizes, insertion_sort_times, label='Insertion Sort', marker='o')


plt.xlabel('Array Size')
plt.ylabel('Time (seconds)')
plt.title('Sorting Algorithm Performance')
plt.legend()
plt.grid(True)


plt.show()