# Valid Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A phrase is a  **palindrome**  if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` *if it is a  **palindrome**, or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

```

 **Example 2:** 

```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

```

 **Example 3:** 

```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

```

 

 **Constraints:** 

- 1 <= s.length <= 2 * 105
- s consists only of printable ASCII characters.

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 24.72%)  
**Memory:** 10.8 MB (beats 7.40%)  
**Submitted:** 2026-11-06T19:27:18.662Z  

```cpp
class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(char x:s){
            if(iswalnum(x)){
              x=tolower(x);
              a.push_back(x);
            }
        }
        string b=a;
        for(int i=0;i<a.length()/2;i++){
            swap(a[i],a[a.length()-1-i]);
        }
        if(a==b)
        return 1;
        else
        return 0;
          
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-palindrome/)