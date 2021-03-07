# 📝Assignment-4

**👯Team Members**
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
Find the Repeated Element


---

```
#Download project
git clone https://github.com/Saggittarius-A/daa 
```
Project Initialize 
```
cd daa
#create 📁assignment-4
mkdir assignment_04

#go to 📁assignment-4
cd assignment_04

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
gcc hashing.cpp
gcc divideandconquer
```
Output
```
Repeated Elements
```
---

**Example Test case**


Input:

Enter the size of 1st Heap: 4

Enter the elements of first Heap: {10, 5, 6, 2}

![ma](https://user-images.githubusercontent.com/57368869/108480008-6d69cb00-72bc-11eb-94a9-ae7dca1ef776.jpg)

Enter the size of 2nd Heap: 3

Enter the elements of Second Heap: {12, 7, 9}

![ma1](https://user-images.githubusercontent.com/57368869/108480145-95592e80-72bc-11eb-9d82-07bc739780e5.jpg)

Output:

{12, 10, 9, 2, 5, 7, 6}



---


### 📋 Theory
We are given a sorted array of n elements containing each element in the range from 1 to n-1 with only one element occurring twice and our task is to design the most efficient algorithm to find that repeating element.


🎯 Approach 1:Brute-force
It is a simple brute force method comparing adjacent elements and if for a case they are equal then it is our repeated element.


🎯 Approach 2: ordered Merge
In this approach a hash table is maintained for elements in the range 1 to n-1 with hash[i]=1 describing the element is present in the array and for an element if hash[i]=1 meaning it is repeated.

🎯 Approach 3: Divide and Conquer
In this approach we start by checking the middle element if it is repeating.Then we check the position of the middle element if it is proper then we check in the right half of the array else in the left half.

---

### Analysis

**🕐Time Complexity**

For Approach1:
- Best case : Ω(1)
- Average case :  θ(n/2)
- Worst case : O(n)

For Approach2:
- Best case : Ω(1)
- Average case : θ(n/2)
- Worst case : O(n)

For Approach3:
- Best case : Ω(1)
- Average case : θ(logn)
- Worst case : O(logn)



**Space Complexity**
- For Approach1: O(1)
- For Approach2: O(n)
- - For Approach3: O(1)


---

### References

[1] https://www.geeksforgeeks.org/find-repeating-element-sorted-array-size-n/

[2] https://www.geeksforgeeks.org/time-complexity-of-building-a-heap/
