# Matrix Descending Traversal Algorithm

This project implements a 2D-array (Matrix) manipulation algorithm in C. It demonstrates how to populate a data structure using an arithmetic progression and retrieve data in reverse order without sorting, purely by manipulating index access.

## 🧮 Mathematical Logic

The algorithm works in two phases:

### Phase 1: Population (Ascending)
It fills a $10 \times 10$ matrix $M$ with the first 100 positive integers divisible by 7.
The value at any position $(i, j)$ corresponds to the linear sequence $k$:
$$M_{i,j} = 7 \times (10i + j + 1)$$
* **Start:** $M_{0,0} = 7$
* **End:** $M_{9,9} = 700$

### Phase 2: Retrieval (Descending)
Instead of sorting the array (which is computationally expensive), the algorithm iterates through the matrix **backwards**.
* **Loop:** $i$ from $9 \to 0$, $j$ from $9 \to 0$.
* **First Output:** $M_{9,9} = 700$
* **Last Output:** $M_{0,0} = 7$

## ⚙️ Technical Structure

* **Data Structure:** `int matris[10][10]` (Static Allocation)
* **Complexity:**
    * Time: $O(R \times C)$ where R is rows and C is columns.
    * Space: $O(R \times C)$ for storage.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o matrix_traverse
    ```
2.  Run the executable:
    ```bash
    ./matrix_traverse
    ```
3.  **Output:** The program will print numbers starting from `700` down to `7`.

---
*This repository demonstrates nested loop control and multidimensional array handling in C.*
