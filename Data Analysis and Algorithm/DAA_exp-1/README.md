# Binary Search
## About Binary Search
Binary search is an efficient algorithm used to find a target value within a sorted array or list. It works by repeatedly dividing the search interval in half, eliminating half of the remaining elements each time based on whether the target value is greater or lesser than the middle element. This process continues until the target value is found or the search interval is empty. Binary search has a time complexity of O(log n), where n is the number of elements in the array. This logarithmic time complexity makes it significantly faster than linear search algorithms, especially for large datasets, as it quickly narrows down the search space with each iteration. However, it requires that the array be sorted beforehand, which can add time complexity of O(n log n) if sorting is necessary, though this sorting can often be done separately from the binary search itself.
### Logic:-
Binary search follows the divide and conquer approach in which the list is divided into two halves, and the item is compared with the middle element of the list. If the match is found then, the location of the middle element is returned. Otherwise, we search into either of the halves depending upon the result produced through the match.<br>
### Algorithm:-
- Start: Begin with the entire sorted array.<br>
- Middle Element: Identify the middle element of the array.<br>
- Comparison: Compare the target value with the middle element.<br>
- Update Search Range: If the target is equal to the middle element, the search is successful. If the target is less than the middle element, repeat the search in the left half of the array. If the target is greater than the middle element, repeat the search in the right half of the array.<br>
- Repeat: Continue this process of halving the search range until the target is found or the search interval is empty.<br>
### Checkout the [CODE](https://github.com/Sushantjha1236/Semster-4_Practicals/blob/main/Data%20Analysis%20and%20Algorithm/DAA_exp-1/BinarySearchEXP1.1.cpp)
### Output:-
![Screenshot 2024-03-03 232715](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/082db8dd-28b1-46d1-b62c-ba51d3021729)
