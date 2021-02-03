# Assignment-2

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019015  |   Aakash Anand | aakashanand7 |
|    IIT2019016  |   Parth kataria | ParthKataria | 
|    IIT2019017  |   Shruti Nanda | Saggittarius-A  |

**Group No-**"05"

**Faculty Name-**"Md Javed"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
To create a matrix of size 50×50 of numbers ranging from 0 to 9.
Find the length of the largest sorted component horizontally.


---

```
#Download project
git clone https://github.com/Saggittarius-A/daa 
```
Project Initialize 
```
cd daa
#create assignment-2 folder
mkdir assignment_02

#go to assignment-2
cd assignment_02

#Create file
touch readme.md

.
.
```
---

Run the code
```
Brute_Force.cpp
Sorting_and_Searching.cpp
```
Output
```
Length of largest sorted array
```
---

**Test case**

Find length of largest sorted array
```
Test Case-1
Input:
2 3
3 4 5 
2 7 5
Out:
3

#--------------------------#
Test Case-2
Input: 
3 4
9 8 7 6
1 2 3 1
3 4 5 1
Out:
4
```

---

### Theory


---

### Analysis

**Time Complexity**

The algorithms were tested against positive random sets of variable sizes.The result thus obtained from this experiment is given below:

For brute():

- Best case : Ω(n*m)
- Average case : θ(n*m)
- worst case : O(n*m)

For union():

- Best case : Ω(n+m)
- Average case : θ(n(logn + 1) +m(logm + 1))
- Worst case : O(n(logn + 1) +m(logm + 1)


For Searching and sorting

- Best case : Ω(mlogm+n)
- Average case : θ((m+n)log(min(m,n)))
- Worst case : O((m+n)log(min(m,n)))



**Space Complexity**

For Brute : O(n*m)

For Union : O(n)

For searching and sorting : O(n)

---

### References

1. https://www.geeksforgeeks.org/longest-increasing-path-matrix/
2. https://www.quora.com/How-would-one-use-Arrays-sort-on-a-multidimensional-array-of-ints-by-the-first-element-of-each-sub-array-in-Java

