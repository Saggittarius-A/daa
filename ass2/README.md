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
cd daa
gcc Brute_Force.cpp
gcc Sorting_and_Searching.cpp
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
Output:
3

#--------------------------#
Test Case-2
Input: 
3 4
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019015  |   Aakash Anand | aakashanand7 |
|    IIT2019016  |   Parth kataria | ParthKataria | 
|    IIT2019017  |   Shruti Nanda | Saggittarius-A  |
| 9 | 8 | 7 | 6 |
| --- | --- | --- | --- |
| 1 | 2 | 3 | 4 |
| 9 | 8 | 9 | 7 |


Output:
4
```

---

### Theory
Given a 2d array with n number of rows and m number of columns where n and m less than 50.
The elements of the array will range from 0 to 9.
We will print the largest sorted component in the array horizontally.


---

### Analysis

**Time Complexity**

The algorithms were tested against positive random array of numbers of variable sizes.The result thus obtained from this experiment is given below:

For brute():

- Best case : Ω(n^2)
- Average case : θ(n^2)
- worst case : O(n^2)

For Sorting_cnt():

- Best case : Ω(n^2)
- Average case : θ(n^2)
- Worst case : O(n^2(logn))

**Space Complexity**

For Brute : O(n^2)

For sorting_count : O(n^2)

---

### References

1. https://www.geeksforgeeks.org/longest-increasing-path-matrix/
2. https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/

