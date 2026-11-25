# Hottest Pellet Spot

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Across the labyrinth's sub-sectors, Pac-Man's telemetry array records beacon sightings, each tagged with a sector integer ID.

Because ghost interference occasionally distorts sub-sector counts, the radar controller flags whichever beacon ID appears with the maximum frequency across the log as the primary hotspot.

Whenever two or more distinct beacon IDs tie for the highest occurrence count, Pac-Man's routing protocol defaults to the numerically smallest ID among those tied leaders to keep path selection deterministic under pressure.

Given the sequence of beacon IDs, report the winning hotspot ID.

 **Input Format** 

First line: An integer, the total number of logged beacon sightings.

Second line: space-separated integers representing the beacon IDs.

 **Constraints** 

 **Output Format** 

Print a single integer representing the beacon ID with the highest frequency (or the smallest ID if tied for maximum frequency).

 **Sample Input 0** 

```
6
4 2 4 1 2 4

```

 **Sample Output 0** 

```
4

```

 **Sample Input 1** 

```
4
10 5 10 5

```

 **Sample Output 1** 

```
5

```

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-25T11:31:31.782Z  

```py
import sys
from collections import Counter

def solve():
    data = sys.stdin.read().split()
    if not data:
        return
    
    n = int(data[0])
    beacons = map(int, data[1:n + 1])
    
    counts = Counter(beacons)
    winner = min(counts.items(), key=lambda item: (-item[1], item[0]))[0]
    print(winner)

if __name__ == "__main__":
    solve()

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/hottest-pellet-spot/problem)