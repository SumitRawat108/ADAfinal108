# ADAfinal108
# Analysis and Design of Algorithms Lab

## Algorithms 


<h3><b>1. Power of a Number Using Fast Exponentiation</b></h3>

<b>Aim:</b>
The aim of this program is to compute the value of a number raised to a given power efficiently.

<b>Use Case:</b>
Used in cryptography, large power computations, and scientific calculations.

<b>Pseudocode:</b>
<pre>
START
Read base value x and exponent n
Initialize: m = n, z = x, pow = 1
While m > 0:
    While m is even:
        m = m / 2
        z = z * z
    m = m - 1
    pow = pow * z
Print pow
END
</pre>

<b>Time Complexity:</b>
O(log n)

<b>Space Complexity:</b>
O(1)

---

<h3><b>2. Polynomial Evaluation Using Horner’s Rule</b></h3>

<b>Aim:</b>
The aim is to evaluate a polynomial efficiently.

<b>Use Case:</b>
Used in numerical analysis and scientific computing.

<b>Pseudocode:</b>
<pre>
START
Define function hornerRule(a, n, x, i)
If i == n - 1:
    Return a[i]
Else:
    Return a[i] + x * hornerRule(a, n, x, i + 1)
Call function and print result
END
</pre>

<b>Time Complexity:</b>
O(n)

<b>Space Complexity:</b>
O(n)

---

<h3><b>3. Permutation Generator</b></h3>

<b>Aim:</b>
The aim is to generate all permutations.

<b>Use Case:</b>
Used in combinatorics and testing.

<b>Pseudocode:</b>
<pre>
START
Define function pg(a, k, n)
If k == n:
    Print array
Else:
    For i from k to n:
        Swap a[k], a[i]
        Call pg(k+1)
        Swap back
END
</pre>

<b>Time Complexity:</b>
O(n!)

<b>Space Complexity:</b>
O(n)

---

<h3><b>4. Tower of Hanoi</b></h3>

<b>Aim:</b>
Solve Tower of Hanoi problem.

<b>Use Case:</b>
Used in recursion teaching.

<b>Pseudocode:</b>
<pre>
START
If n == 1:
    Move disk
Else:
    Move n-1 disks
    Move largest disk
    Move n-1 disks
END
</pre>

<b>Time Complexity:</b>
O(2ⁿ)

<b>Space Complexity:</b>
O(n)

---

<h3><b>5. Linear Search</b></h3>

<b>Aim:</b>
Search element sequentially.

<b>Use Case:</b>
Used for small datasets.

<b>Pseudocode:</b>
<pre>
START
Read n
Traverse array
If element found:
    Return index
END
</pre>

<b>Time Complexity:</b>
O(n)

<b>Space Complexity:</b>
O(n)

<img width="588" height="455" alt="linearSearch" src="https://github.com/user-attachments/assets/29b92036-2457-42ed-9d4b-4a57244028cb" />

---

<h3><b>6. Bubble Sort</b></h3>

<b>Aim:</b>
Sort elements using swapping.

<b>Use Case:</b>
Used for learning sorting.

<b>Pseudocode:</b>
<pre>
START
For each pass:
    Compare adjacent elements
    Swap if needed
END
</pre>

<b>Time Complexity:</b>
O(n²)

<b>Space Complexity:</b>
O(1)

<img width="567" height="455" alt="bubbleSort" src="https://github.com/user-attachments/assets/89193908-d453-422f-8764-667879fad558" />

---

<h3><b>7. First Duplicate Element</b></h3>

<b>Aim:</b>
Find first duplicate element.

<b>Use Case:</b>
Used in data validation.

<b>Pseudocode:</b>
<pre>
START
Compare each element with others
If duplicate found:
    Print value
END
</pre>

<b>Time Complexity:</b>
O(n²)

<b>Space Complexity:</b>
O(n)

---

<h3><b>8. Find Missing Number</b></h3>

<b>Aim:</b>
Find missing number in sorted array.

<b>Use Case:</b>
Used in sequence validation.

<b>Pseudocode:</b>
<pre>
START
Check arr[i] == expected
If not:
    Return missing number
END
</pre>

<b>Time Complexity:</b>
O(n)

<b>Space Complexity:</b>
O(n)

---

<h3><b>9. Ball Bounce Count</b></h3>

<b>Aim:</b>
Calculate number of bounces.

<b>Use Case:</b>
Used in physics simulations.

<b>Pseudocode:</b>
<pre>
START
Initialize factor
While velocity >= 1:
    velocity = velocity * factor
    count++
END
</pre>

<b>Time Complexity:</b>
O(b)

<b>Space Complexity:</b>
O(1)

---

<h3><b>10. Selection Sort</b></h3>

<b>Aim:</b>
Sort array using selection.

<b>Use Case:</b>
Used for small datasets.

<b>Pseudocode:</b>
<pre>
START
For each position:
    Find minimum element
    Swap
END
</pre>

<b>Time Complexity:</b>
O(n²)

<b>Space Complexity:</b>
O(1)

<img width="576" height="455" alt="selectionSort" src="https://github.com/user-attachments/assets/0a80a8fd-5306-4950-a7be-ebdd2447323a" />

---

<h3><b>11. Insertion Sort</b></h3>

<b>Aim:</b>
Sort elements using insertion.

<b>Use Case:</b>
Used for nearly sorted arrays.

<b>Pseudocode:</b>
<pre>
START
For each element:
    Insert into sorted part
END
</pre>

<b>Time Complexity:</b>
O(n²)

<b>Space Complexity:</b>
O(1)

<img width="567" height="455" alt="insertionSort" src="https://github.com/user-attachments/assets/a93482a2-4f69-4ef8-a0f6-a7367de0b370" />

---

<h3><b>12. Binary Search</b></h3>

<b>Aim:</b>
Search element in sorted array.

<b>Use Case:</b>
Used in fast lookup.

<b>Pseudocode:</b>
<pre>
START
Find mid
If match return
Else search left/right
END
</pre>

<b>Time Complexity:</b>
O(log n)

<b>Space Complexity:</b>
O(log n)

<img width="567" height="455" alt="binarySearch" src="https://github.com/user-attachments/assets/b90d0c60-f2ca-4875-aaf1-21aeb6026f7b" />

---

<h3><b>13. Quick Sort</b></h3>

<b>Aim:</b>
Sort using divide and conquer.

<b>Use Case:</b>
Used for efficient sorting.

<b>Pseudocode:</b>
<pre>
START
Choose pivot
Partition array
Recursively sort subarrays
END
</pre>

<b>Time Complexity:</b>
O(n log n)

<b>Space Complexity:</b>
O(log n)

<img width="567" height="455" alt="quickSort" src="https://github.com/user-attachments/assets/858c3a03-209e-4438-9174-4d5b9ab43e19" />

---

<h3><b>14. Merge Sort</b></h3>

<b>Aim:</b>
Sort using merging technique.

<b>Use Case:</b>
Used in large datasets.

<b>Pseudocode:</b>
<pre>
START
Divide array
Sort halves
Merge results
END
</pre>

<b>Time Complexity:</b>
O(n log n)

<b>Space Complexity:</b>
O(n)

<img width="571" height="455" alt="mergeSort" src="https://github.com/user-attachments/assets/a3c7fa0e-0878-4cf1-b43d-7f2dde8a2666" />

---

<h3><b>15. Ternary Search</b></h3>

<b>Aim:</b>
Search element using 3 parts.

<b>Use Case:</b>
Used in optimization.

<b>Pseudocode:</b>
<pre>
START
Divide into 3 parts
Compare mid values
Search region
END
</pre>

<b>Time Complexity:</b>
O(log n)

<b>Space Complexity:</b>
O(log n)

---

<h3><b>16. Iterative Quick Sort</b></h3>

<b>Aim:</b>
Quick sort using stack.

<b>Use Case:</b>
Used to avoid recursion.

<b>Pseudocode:</b>
<pre>
START
Push initial indices
While stack not empty:
    Pop range
    Partition
    Push subarrays
END
</pre>

<b>Time Complexity:</b>
O(n log n)

<b>Space Complexity:</b>
O(log n)

---

<h3><b>17. Fractional Knapsack</b></h3>

<b>Aim:</b>
Maximize profit with fractions.

<b>Use Case:</b>
Used in resource allocation.

<b>Pseudocode:</b>
<pre>
START
Sort items by ratio
Take full/fractional items
END
</pre>

<b>Time Complexity:</b>
O(n log n)

<b>Space Complexity:</b>
O(1)

---

<h3><b>18. Kth Smallest Element</b></h3>

<b>Aim:</b>
Find kth smallest value.

<b>Use Case:</b>
Used in ranking.

<b>Pseudocode:</b>
<pre>
START
Partition array
Check position
Recurse left/right
END
</pre>

<b>Time Complexity:</b>
O(n)

<b>Space Complexity:</b>
O(log n)

---

<h3><b>19. Max Min</b></h3>

<b>Aim:</b>
Find max and min.

<b>Use Case:</b>
Used in analysis.

<b>Pseudocode:</b>
<pre>
START
Divide array
Compare halves
Combine results
END
</pre>

<b>Time Complexity:</b>
O(n)

<b>Space Complexity:</b>
O(log n)

---

<h3><b>20. Convex Hull</b></h3>

<b>Aim:</b>
Find boundary points.

<b>Use Case:</b>
Used in graphics.

<b>Pseudocode:</b>
<pre>
START
Find extreme points
Divide set
Recurse
END
</pre>

<b>Time Complexity:</b>
O(n log n)

<b>Space Complexity:</b>
O(n)

---

<h3><b>21. Prim’s Algorithm</b></h3>

<b>Aim:</b>
Find MST.

<b>Use Case:</b>
Used in networks.

<b>Pseudocode:</b>
<pre>
START
Initialize keys
Pick minimum
Update neighbors
END
</pre>

<b>Time Complexity:</b>
O(V²)

<b>Space Complexity:</b>
O(V)

---

<h3><b>22. Kruskal’s Algorithm</b></h3>

<b>Aim:</b>
Find MST using edges.

<b>Use Case:</b>
Used in clustering.

<b>Pseudocode:</b>
<pre>
START
Sort edges
Add edge if no cycle
END
</pre>

<b>Time Complexity:</b>
O(E log E)

<b>Space Complexity:</b>
O(V)

---

<h3><b>23. Dijkstra</b></h3>

<b>Aim:</b>
Find shortest path.

<b>Use Case:</b>
Used in routing.

<b>Pseudocode:</b>
<pre>
START
Initialize distances
Pick minimum
Update neighbors
END
</pre>

<b>Time Complexity:</b>
O(V²)

<b>Space Complexity:</b>
O(V)

---

<h3><b>24. Multistage Graph Backward</b></h3>

<b>Aim:</b>
Find min cost path.

<b>Use Case:</b>
Used in routing.

<b>Pseudocode:</b>
<pre>
START
Set destination cost = 0
Update costs backward
Trace path
END
</pre>

<b>Time Complexity:</b>
O(n²)

<b>Space Complexity:</b>
O(n)

---

<h3><b>25. Multistage Graph Forward</b></h3>

<b>Aim:</b>
Find min cost forward.

<b>Use Case:</b>
Used in planning.

<b>Pseudocode:</b>
<pre>
START
Set source cost = 0
Update forward costs
Trace path
END
</pre>

<b>Time Complexity:</b>
O(n²)

<b>Space Complexity:</b>
O(n)

---

<h3><b>26. Matrix Chain Multiplication</b></h3>

<b>Aim:</b>
Minimize multiplication cost.

<b>Use Case:</b>
Used in compilers.

<b>Pseudocode:</b>
<pre>
START
Initialize table
Try all splits
Store min cost
END
</pre>

<b>Time Complexity:</b>
O(n³)

<b>Space Complexity:</b>
O(n²)

---

<h3><b>27. LCS</b></h3>

<b>Aim:</b>
Find longest common subsequence.

<b>Use Case:</b>
Used in DNA.

<b>Pseudocode:</b>
<pre>
START
Build DP table
Trace result
END
</pre>

<b>Time Complexity:</b>
O(mn)

<b>Space Complexity:</b>
O(mn)

---

<h3><b>28. Floyd Warshall</b></h3>

<b>Aim:</b>
All pairs shortest path.

<b>Use Case:</b>
Used in networks.

<b>Pseudocode:</b>
<pre>
START
For each k:
    Update distances
END
</pre>

<b>Time Complexity:</b>
O(n³)

<b>Space Complexity:</b>
O(n²)

---

<h3><b>29. TSP</b></h3>

<b>Aim:</b>
Find minimum tour.

<b>Use Case:</b>
Used in logistics.

<b>Pseudocode:</b>
<pre>
START
Use DP + bitmask
Compute recursively
END
</pre>

<b>Time Complexity:</b>
O(n²2ⁿ)

<b>Space Complexity:</b>
O(n2ⁿ)

---

<h3><b>30. 0/1 Knapsack</b></h3>

<b>Aim:</b>
Maximize profit.

<b>Use Case:</b>
Used in optimization.

<b>Pseudocode:</b>
<pre>
START
Build DP table
Choose max(include, exclude)
END
</pre>

<b>Time Complexity:</b>
O(nm)

<b>Space Complexity:</b>
O(nm)

---

<h3><b>31. N Queens</b></h3>

<b>Aim:</b>
Place queens safely.

<b>Use Case:</b>
Used in puzzles.

<b>Pseudocode:</b>
<pre>
START
Place queens row-wise
Check safety
END
</pre>

<b>Time Complexity:</b>
O(n!)

<b>Space Complexity:</b>
O(n)

---

<h3><b>32. Subset Sum</b></h3>

<b>Aim:</b>
Find subsets with target.

<b>Use Case:</b>
Used in decision problems.

<b>Pseudocode:</b>
<pre>
START
Include/exclude element
Check sum
END
</pre>

<b>Time Complexity:</b>
O(2ⁿ)

<b>Space Complexity:</b>
O(n)

---

<h3><b>33. Graph Coloring</b></h3>

<b>Aim:</b>
Color graph.

<b>Use Case:</b>
Used in scheduling.

<b>Pseudocode:</b>
<pre>
START
Assign colors
Check adjacency
Backtrack
END
</pre>

<b>Time Complexity:</b>
O(mⁿ)

<b>Space Complexity:</b>
O(n)

---

<h3><b>34. Hamiltonian Cycle</b></h3>

<b>Aim:</b>
Find Hamiltonian cycle.

<b>Use Case:</b>
Used in routing.

<b>Pseudocode:</b>
<pre>
START
Select vertices
Check adjacency
Complete cycle
END
</pre>

<b>Time Complexity:</b>
O(n!)

<b>Space Complexity:</b>
O(n)

---
