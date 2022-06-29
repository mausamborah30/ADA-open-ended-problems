# ADA-open-ended-problems

Problem Statement 1:
Implementation of Bipartite Max Cover
Technique : Greedy Algorithm
Time complexity :
Each iteration except the last one matches two previously free vertices-one from each of the sets V and U. 
Therefore, the total number of iterations cannot exceed ⌊n/2⌋ + 1, 
where n = |V| + |U| is the number of vertices in the graph. The time spent on each iteration is in O(n + m), 
where m =|E| is the number of edges in the graph. 
Hence, the time efficiency of the algorithm is О(n(n+m)).



Problem Statement 2:
Implementation of Matrix Chain Multiplication
Technique :Dynamic Programming
Time complexity :
O(N^3) where N is the number present in the chain of the matrices. As we know that we use a matrix of N*N order to find the minimum operations. 
We need to find the minimum value for all the k values where i<=k<j. So overall we use 3 nested for loop.
