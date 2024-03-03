# Quick sort
## About Quick sort
Quick sort is a sorting algorithm that follows the divide and conquer strategy. It selects a pivot element, partitions the array into two sub-arrays around the pivot (one with elements less than the pivot and the other with elements greater), and recursively sorts the sub-arrays. It has an average time complexity of O(n log n), making it efficient for large datasets. However, its worst-case time complexity is O(n^2) if poorly chosen pivots, such as the first or last element, consistently lead to unbalanced partitions.
### Logic:- 
Sort a given set of elements using the Quick Sort method and determine the time required to sort the elements. Repeat the experiment for different values of n, the number of elements in the list to be sorted, and plot a graph of the time taken versus n. The elements can be read from a file or can be generated using the random number generator.<br>
### Algorithm:-
- Partitioning: Choose a pivot element from the array.<br>
- Partitioning Step: Rearrange the elements of the array so that all elements less than the pivot come before it, and all elements greater than the pivot come after it. The pivot element is now in its final sorted position.<br>
- Recursion: Recursively apply the same process to the sub-arrays formed on either side of the pivot, until the entire array is sorted.<br>
- Base Case: When the sub-array contains only one element or is empty, it is already sorted, so no further action is needed.<br>
### Checkout the [CODE](https://github.com/Sushantjha1236/Semster-4_Practicals/blob/main/Data%20Analysis%20and%20Algorithm/DAA_exp-2/QuickSort_EXP1.2.cpp)
### Output:-
![Screenshot 2024-03-03 234240](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/09c47c17-6ba5-4dba-b885-c5eb7e38e90f)
