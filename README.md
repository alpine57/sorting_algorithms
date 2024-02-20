sorting algorithms
==================================================================================================================================================================================
A sorting algorithm is a set of instructions that takes an array or list of elements and arranges them in a specific order, typically ascending or descending. Sorting is a fundamental operation in computer science, and various algorithms have been developed to efficiently perform this task.

Big O Notation:
Big O notation is a way to describe the upper bound on the time or space complexity of an algorithm. It provides an asymptotic analysis of an algorithm's efficiency as the input size approaches infinity. In simpler terms, it gives you an idea of how the runtime or space requirements of an algorithm grow as the input size increases.

Let's look at some common sorting algorithms and their Big O complexities:

Bubble Sort:

Description: It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.
Time Complexity (Big O): O(n^2) - Quadratic time complexity, where 'n' is the number of elements in the array.
Selection Sort:

Description: It repeatedly finds the minimum element from the unsorted part of the array and puts it at the beginning.
Time Complexity (Big O): O(n^2) - Quadratic time complexity.
Insertion Sort:

Description: It builds the sorted array one element at a time, taking one element from the unsorted part and inserting it into its correct position in the sorted part.
Time Complexity (Big O): O(n^2) - Quadratic time complexity.
Merge Sort:

Description: It divides the unsorted list into 'n' sub-lists, each containing one element, and then repeatedly merges sub-lists to produce new sorted sub-lists until there is only one sub-list remaining.
Time Complexity (Big O): O(n log n) - Linearithmic time complexity.
Quick Sort:

Description: It selects a 'pivot' element and partitions the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.
Time Complexity (Big O): O(n log n) - Linearithmic time complexity on average, but it can degrade to O(n^2) in the worst case.
Understanding Big O notation helps you compare the efficiency of algorithms without getting bogged down in the details of the specific implementation or machine-dependent constants. Generally, you'd prefer algorithms with lower Big O complexities for large input sizes, as they are more efficient.
