# Common Warp Prefix

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Ghost scouts patrolling the maze broadcast route codes, each written as a non-empty string of lowercase English letters.

To lock onto their shared patrol corridor without triggering false alarms, Pac-Man's scanner needs the longest common prefix that appears at the very beginning of every single route code.

If all route codes share a non-empty starting segment, output that longest common prefix. If they diverge right from the first character and share no common prefix at all, output NONE.

 **Input Format** 

First line: An integer, the number of route codes.

Next lines: Each line contains one non-empty lowercase string representing a route code.

 **Constraints** 

Each string consists solely of lowercase English letters (a–z) and has length.

The total length of all strings combined is at most.

 **Output Format** 

Print a single string representing the longest common prefix across all strings, or NONE if no common prefix exists.

 **Sample Input 0** 

```
3
blink
blinky
bling

```

 **Sample Output 0** 

```
blin

```

 **Sample Input 1** 

```
3
inky
pinky
clyde

```

 **Sample Output 1** 

```
NONE

```

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-25T11:35:40.782Z  

```py
import sys

def solve():
    data = sys.stdin.read().split()
    if not data:
        return

    n = int(data[0])
    prefix = data[1]

    for s in data[2:n + 1]:
        limit = min(len(prefix), len(s))
        j = 0
        while j < limit and prefix[j] == s[j]:
            j += 1
        prefix = prefix[:j]

        if not prefix:
            print("NONE")
            return

    print(prefix if prefix else "NONE")

if __name__ == "__main__":
    solve()

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/common-warp-prefix/problem)