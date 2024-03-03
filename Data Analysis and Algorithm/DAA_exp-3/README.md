# Strassen Matrix Multiplication
## About Strassen Matrix
Strassen's algorithm is a method for multiplying matrices that reduces the number of arithmetic operations needed compared to the standard matrix multiplication algorithm. It accomplishes this by recursively breaking down the matrices into smaller submatrices and using clever combinations of additions and subtractions to compute the result. Strassen's algorithm has a time complexity of approximately O(n^2.81), which is an improvement over the standard O(n^3) complexity for large matrices. However, it has higher constant factors and overhead due to its recursive nature, so it may not always outperform the standard algorithm for smaller matrix sizes.
### Logic:-
Matrix multiplication is based on a divide-and-conquer-based approach. Here we divide our matrix into a smaller square matrix, solve that smaller square matrix and merge it into larger results. For larger matrices, this approach will continue until we recurse all the smaller sub-matrices.<br>
### Algorithm:-
- Divide: Divide the matrices to be multiplied into smaller submatrices.<br>
- Conquer: Perform arithmetic operations on these submatrices to compute intermediate matrices.<br>
- Combine: Combine the intermediate matrices to form the result matrix.<br>
- Recursion: Recursively apply these steps to further subdivide the matrices until reaching a base case, typically submatrices of size 1x1.<br>
- Base Case: When the submatrices reach a certain size (often small enough to directly compute multiplication), perform standard matrix multiplication.<br>
### Checkout the [Code](https://github.com/Sushantjha1236/Semster-4_Practicals/blob/main/Data%20Analysis%20and%20Algorithm/DAA_exp-3/StrassenMatrix_EXP1.3.cpp)
### Output
![Screenshot 2024-03-04 001232](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/4fbb48b5-7a0c-43c5-9920-42a2cd8e4f23)
