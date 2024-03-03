# Kruskal's Algorithm
## About Kruskal's Algorithm
Kruskal's algorithm, a greedy approach, is utilized for determining the minimum spanning tree (MST) of a connected, undirected graph. Its operation involves the sorting of graph edges based on their weights, followed by their sequential addition to the MST in ascending order of weight. Crucially, it ensures that no cycles are formed by preserving disjoint sets of vertices. An edge is incorporated into the MST only if it links two disjoint sets. Kruskal's algorithm exhibits a time complexity of O(E log E), where E represents the number of edges in the graph, predominantly due to the sorting phase### Logic:-
Matrix multiplication is based on a divide-and-conquer-based approach. Here we divide our matrix into a smaller square matrix, solve that smaller square matrix and merge it into larger results. For larger matrices, this approach will continue until we recurse all the smaller sub-matrices.<br>
### Algorithm:-
- Sort Edges: Sort all the edges of the graph in ascending order based on their weights.
- Initialize MCST: Initialize an empty Minimum Cost Spanning Tree (MCST).<br 3) Iterate Over Edges: Iterate through the sorted edges.
- Check for Cycle: For each edge, check if adding it to the MCST would create a cycle. If not, add it to the MCST.
- Union-Find: Use a Union-Find data structure to efficiently detect cycles while adding edges to the MCST.
- Repeat: Repeat steps 3-5 until the MCST contains (n-1) edges, where n is the number of vertices in the graph.
- Output: The resulting MCST is the minimum cost spanning tree of the given graph.
### Checkout the [Code](https://github.com/Sushantjha1236/Semster-4_Practicals/blob/main/Data%20Analysis%20and%20Algorithm/DAA_exp-4/Kruskal%E2%80%99sAlgorithm_EXP2.1.cpp)
### Output
![Screenshot 2024-03-04 002749](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/6da9984a-c4b7-4547-9508-6130075c2aff)
