# 📝Assignment-3

** 👯Team Members **
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019015  |   Aakash Anand | aakashanand7 |
|    IIT2019016  |   Parth kataria | ParthKataria | 
|    IIT2019017  |   Shruti Nanda | Saggittarius-A  |

**Group No-**"05"

**Faculty Name-**"Md Javed"

**Mentor Name-** "Md. Meraz"

---
## ❓Problem Statement
Merge Two Heaps 


---

```
#Download project
git clone https://github.com/Saggittarius-A/daa 
```
Project Initialize 
```
cd daa
#create 📁assignment-3
mkdir assignment_03

#go to 📁assignment-3
cd assignment_03

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
Merge Two Heap

Test Case

Input:

Enter the size of 1st Heap:
4
Enter the elements of first Heap:
{10, 5, 6, 2}

![ma](https://user-images.githubusercontent.com/57368869/108480008-6d69cb00-72bc-11eb-94a9-ae7dca1ef776.jpg)

Enter the size of 2nd Heap:
3
Enter the elements of Second Heap:
{12, 7, 9}

![ma1](https://user-images.githubusercontent.com/57368869/108480145-95592e80-72bc-11eb-9d82-07bc739780e5.jpg)

Output:
{12, 10, 9, 2, 5, 7, 6}


![ma2](https://user-images.githubusercontent.com/57368869/108480194-a73ad180-72bc-11eb-966b-5e48f64d416a.jpg)




---




### 📋 Theory
A heap is a tree-based data structure in which all the nodes of the tree are in a specific order.On basis of order there are two heaps min heap and max heap.We are given two heaps and we have returned a merged heap of the given heaps.

![Screenshot (174)](https://user-images.githubusercontent.com/57368869/108061795-d3690f00-707e-11eb-8a4f-84ca7dfb8335.png)

🎯 Approach 1:Random Merge
In this approach sorting is performed according to the property of the heap.
In descending order  if a and b are max heap and in ascending order if a and b are min heap.

🎯 Approach 2: ordered Merge
In this approach sorting is performed according to the property of the heap.
In descending order  if a and b are max heap and in ascending order if a and b are min heap.


---

### Analysis

** 🕐Time Complexity**

For Approach1:
- Best case : Ω((n+m)*(1+log(n+m))
- Average case : θ((n+m)*(1+log(n+m))
- Worst case : O((n+m)*(1+log(n+m))

For Approach2:
- Best case : Ω(n+m)
- Average case : θ(n+m)
- Worst case : O(n+m)




**Space Complexity**
- For Approach1: O(n+m)
- For Approach2: O(n+m)


---

### References

[1] https://www.geeksforgeeks.org/merge-two-binary-max-heaps/

[2] https://www.geeksforgeeks.org/time-complexity-of-building-a-heap/
