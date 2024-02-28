# Data Analysis and Algorithm(DAA)_Practical
This file contains details of  Practical files of Data Analysis and Algorithm(DAA)
Semester - 4
## About
Data analysis involves examining and interpreting data to extract meaningful insights and patterns, guiding industry decision-making processes. Algorithms, on the other hand, are systematic procedures designed to solve computational problems efficiently. Businesses and researchers can uncover hidden trends, predict future outcomes, and optimize processes by combining data analysis techniques with well-designed algorithms. This synergy enables the creation of powerful tools and technologies that drive innovation and address complex challenges in finance to healthcare. Ultimately, the integration of data analysis and algorithms facilitates informed decision-making and fosters advancements in various domains.
## [Experiment-1.1](https://github.com/Sushantjha1236/Semster-4/blob/main/Data%20Analysis%20and%20Algorithm/DAA_exp-1.cpp)
### Aim:-  
Implementation of Binary Search using the Divide & Conquer Approach.<br>
### Logic:-
Binary search follows the divide and conquer approach in which the list is divided into two halves, and the item is compared with the middle element of the list. If the match is found then, the location of the middle element is returned. Otherwise, we search into either of the halves depending upon the result produced through the match.<br>
### Algorithm:-
**1)** Start: Begin with the entire sorted array.<br>
**2)** Middle Element: Identify the middle element of the array.<br>
**3)** Comparison: Compare the target value with the middle element.<br>
**4)** Update Search Range: If the target is equal to the middle element, the search is successful. If the target is less than the middle element, repeat the search in the left half of the array. If the target is greater than the middle element, repeat the search in the right half of the array.<br>
**5)** Repeat: Continue this process of halving the search range until the target is found or the search interval is empty.<br>
## [Experiment-1.2](https://github.com/Sushantjha1236/Semster-4/blob/main/Data%20Analysis%20and%20Algorithm/DAA_exp-2.cpp)
### Aim:- 
Implementation of Quick Sort using Divide & Conquer Approach.<br>
### Logic:- 
Sort a given set of elements using the Quick Sort method and determine the time required to sort the elements. Repeat the experiment for different values of n, the number of elements in the list to be sorted, and plot a graph of the time taken versus n. The elements can be read from a file or can be generated using the random number generator.<br>
### Algorithm:-
**1)** Partitioning: Choose a pivot element from the array.<br>
**2)** Partitioning Step: Rearrange the elements of the array so that all elements less than the pivot come before it, and all elements greater than the pivot come after it. The pivot element is now in its final sorted position.<br>
**3)** Recursion: Recursively apply the same process to the sub-arrays formed on either side of the pivot, until the entire array is sorted.<br>
**4)** Base Case: When the sub-array contains only one element or is empty, it is already sorted, so no further action is needed.<br>
# [Experiment-1.3](https://github.com/Sushantjha1236/Semster-4/blob/main/Data%20Analysis%20and%20Algorithm/DAA_exp-3.cpp)
### Aim:- 
Implement Strassen Matrix Multiplication using Divide & Conquer Approach.<br>
### Logic:-
Matrix multiplication is based on a divide-and-conquer-based approach. Here we divide our matrix into a smaller square matrix, solve that smaller square matrix and merge it into larger results. For larger matrices, this approach will continue until we recurse all the smaller sub-matrices.<br>
### Algorithm:-
**1)** Divide: Divide the matrices to be multiplied into smaller submatrices.<br>
**2)** Conquer: Perform arithmetic operations on these submatrices to compute intermediate matrices.<br>
**3)** Combine: Combine the intermediate matrices to form the result matrix.<br>
**4)** Recursion: Recursively apply these steps to further subdivide the matrices until reaching a base case, typically submatrices of size 1x1.<br>
**5)** Base Case: When the submatrices reach a certain size (often small enough to directly compute multiplication), perform standard matrix multiplication.<br>
# [Experiment-2.1](https://github.com/Sushantjha1236/Semster-4/blob/main/Data%20Analysis%20and%20Algorithm/DAA_exp-4.cpp)
### Aim:-
Find out the Minimum Cost Spanning Tree using Kruskal’s Algorithm with the help of the Greedy Approach.<br>
### Logic:-
A minimum spanning tree (MST) or minimum weight spanning tree is a subset of the edges of a connected, edge-weighted undirected graph that connects all the vertices together, without any cycles and with the minimum possible total edge weight.
### Algorithm:-
**1)** Sort Edges: Sort all the edges of the graph in ascending order based on their weights.<br>
**2)** Initialize MCST: Initialize an empty Minimum Cost Spanning Tree (MCST).<br
**3)** Iterate Over Edges: Iterate through the sorted edges.<br>
**4)** Check for Cycle: For each edge, check if adding it to the MCST would create a cycle. If not, add it to the MCST.<br>
**5)** Union-Find: Use a Union-Find data structure to efficiently detect cycles while adding edges to the MCST.<br>
**6)** Repeat: Repeat steps 3-5 until the MCST contains (n-1) edges, where n is the number of vertices in the graph.<br>
**7)** Output: The resulting MCST is the minimum cost spanning tree of the given graph.<br>
# [Experiment-2.2](https://github.com/Sushantjha1236/Semster-4/blob/main/Data%20Analysis%20and%20Algorithm/DAA_exp-5.cpp)
### Aim: 
Perform Job Sequencing with a deadline using the Greedy Approach using C/C++.
### Logic:
A greedy algorithm is an approach for solving a problem by selecting the best option available at the moment. It doesn't worry whether the current best result will bring the overall optimal result. The algorithm never reverses the earlier decision even if the choice is wrong. It works in a top-down approach.
### Algorithm:
**1)** Sort Jobs by Profit: Sort the given jobs in descending order of their profits. This step ensures that the jobs with higher profits are considered first during job sequencing.<br>
**2)** Initialize Result and Slots Arrays: Create two arrays: one to store the sequence of jobs (result array) and another to track the availability of slots (slots array). Initialize both arrays appropriately.<br>
**3)** Iterate Over Jobs:For each job in the sorted list:<br>
Determine the deadline of the current job.<br>
Find the latest available slot before the deadline (if any).<br>
If a slot is available before the deadline, assign the job to that slot.<br>
Mark the slot as occupied in the slots array.<br>
**4)** Output Sequence of Jobs:Print the sequence of jobs that were successfully assigned to slots. These jobs form the optimal job sequence that maximizes profit while meeting all deadlines.<br>
**5)** End of Algorithm: End the algorithm once all jobs have been considered.<br>
