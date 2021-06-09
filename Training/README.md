# Bài tập UIT - ACM

## 1. 
## 2. B - Equal Distance
Professor An and has a problem about **n** on a plane, each point coordinate is a pair of integers. The coordinate of the **i**-th point **(xi, yi)**, i = 1..n.  
To solve this problem, Professor An applies Manhattan distance, which defines the distance between point **i** and point **j** as **|xi - xj| + |yi - yj|**. After that, the restates his way of reasoning based on Euclid distance **sqrt((xi - xj)^2 + (yi - yj)^2)** in order to show that using different formulas may give different calculated result values, but the mathematical properties are equivalent in both types of distances. That is one of the most important characteristics of Metric space.  
However, there are some pair of point **(i, j)** that Professor An doesn't have to restate different derivations because the distance between **i** and **j** is still the same when calculated by both formulas.  
Find the number of pairs of points that their Manhattan distances are Euclidean distance are identical.  
### Input
- The first line is a positive integers **n** (1 <= **n** <= 2 x10^5) - the number of points.
- Each of the next **n** lines includes 2 integers xi and yi (|xi|, |yi| <= 10^9) - the coordinate of the of the **i**-th point.
### Output
Print on one line one integer that is the number of pairs of points that their Manhattan distances and Euclidean distances are identical.
### Example:
```
Input   | Output
6       | 11
0 0     |
0 1     |
0 2     |
-1 1    |
0 1     |
1 1     |
```
