import matplotlib.pyplot as plt


array_sizes = [100, 500, 1000, 5000, 10000, 100000, 1000000]
non_IterativeMerge_Sort_times = [0.000026, 0.000129, 0.000266,  0.001500, 0.003251, 0.035535, 0.394199]
IterativeMerge_Sort_times = [0.000023, 0.000125, 0.000261, 0.001423, 0.002924, 0.033788, 0.400218]



plt.figure(figsize=(10, 6))
plt.plot(array_sizes, non_IterativeMerge_Sort_times, label='Non-iterative merge Sort', marker='o')
plt.plot(array_sizes, IterativeMerge_Sort_times, label='Iterative merge Sort', marker='o')


plt.xlabel('Array Size')
plt.ylabel('Time (seconds)')
plt.title('Sorting Algorithm Performance')
plt.legend()
plt.grid(True)


plt.show()

"""Output
Array size: 100
Non-iterative merge Sort took 0.000026 seconds
Iterative merge Sort took 0.000023 seconds

Array size: 500
Non-iterative merge Sort took 0.000129 seconds
Iterative merge Sort took 0.000125 seconds

Array size: 1000
Non-iterative merge Sort took 0.000266 seconds
Iterative merge Sort took 0.000261 seconds

Array size: 5000
Non-iterative merge Sort took 0.001500 seconds
Iterative merge Sort took 0.001423 seconds

Array size: 10000
Non-iterative merge Sort took 0.003251 seconds
Iterative merge Sort took 0.002924 seconds

Array size: 100000
Non-iterative merge Sort took 0.035535 seconds
Iterative merge Sort took 0.033788 seconds

Array size: 1000000
Non-iterative merge Sort took 0.394199 seconds
Iterative merge Sort took 0.400218 seconds
"""