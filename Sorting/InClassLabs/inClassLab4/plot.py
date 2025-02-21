import matplotlib.pyplot as plt


array_sizes = [100, 500, 1000, 5000, 10000, 100000, 1000000]
non_IterativeMerge_Sort_times = [0.000008, 0.000044, 0.000095, 0.000532, 0.001179, 0.016715, 0.166647]
Iterative_Sort_times = [0.000014, 0.000067, 0.000157, 0.000692, 0.001445, 0.015337, 0.209522]



plt.figure(figsize=(10, 6))
plt.plot(array_sizes, non_IterativeMerge_Sort_times, label='Non-iterative quick Sort', marker='o')
plt.plot(array_sizes, Iterative_Sort_times, label='Iterative Quick Sort', marker='o')


plt.xlabel('Array Size')
plt.ylabel('Time (seconds)')
plt.title('Sorting Algorithm Performance')
plt.legend()
plt.grid(True)


plt.show()

"""Output
Array size: 100
Non-iterative Quick Sort took 0.000008 seconds
Iterative Quick Sort took 0.000014 seconds

Array size: 500
Non-iterative Quick Sort took 0.000044 seconds
Iterative Quick Sort took 0.000067 seconds

Array size: 1000
Non-iterative Quick Sort took 0.000095 seconds
Iterative Quick Sort took 0.000157 seconds

Array size: 5000
Non-iterative Quick Sort took 0.000532 seconds
Iterative Quick Sort took 0.000692 seconds

Array size: 10000
Non-iterative Quick Sort took 0.001179 seconds
Iterative Quick Sort took 0.001445 seconds

Array size: 100000
Non-iterative Quick Sort took 0.016715 seconds
Iterative Quick Sort took 0.015337 seconds

Array size: 1000000
Non-iterative Quick Sort took 0.166647 seconds
Iterative Quick Sort took 0.209522 seconds
"""