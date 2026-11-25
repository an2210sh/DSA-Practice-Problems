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
