# Maximum Product of Two Digits

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a positive integer `n`.

Return the  **maximum**  product of any two digits in `n`.

 **Note:**  You may use the  **same**  digit twice if it appears more than once in `n`.

 

 **Example 1:** 

 **Input:**  n = 31

 **Output:**  3

 **Explanation:** 

- The digits of n are [3, 1].
- The possible products of any two digits are: 3 * 1 = 3.
- The maximum product is 3.

 **Example 2:** 

 **Input:**  n = 22

 **Output:**  4

 **Explanation:** 

- The digits of n are [2, 2].
- The possible products of any two digits are: 2 * 2 = 4.
- The maximum product is 4.

 **Example 3:** 

 **Input:**  n = 124

 **Output:**  8

 **Explanation:** 

- The digits of n are [1, 2, 4].
- The possible products of any two digits are: 1  *2 = 2, 1*  4 = 4, 2 * 4 = 8.
- The maximum product is 8.

 

 **Constraints:** 

- 10 <= n <= 109

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 11.02%)  
**Memory:** 8.9 MB (beats 44.28%)  
**Submitted:** 2026-11-05T19:54:22.850Z  

```cpp
class Solution {
public:
    int maxProduct(int n) {
       vector<int> v;//assign a vector
       int i=0;
       while(n>0){//store each digit in differnt index of vector
        v.push_back(n%10);
        n=n/10;
        i++;
       }
       sort(v.begin(),v.end());//sort the values
       int m1=v[i-1],m2=v[i-2];//find max 2 values of number
       return m1*m2;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-product-of-two-digits/)