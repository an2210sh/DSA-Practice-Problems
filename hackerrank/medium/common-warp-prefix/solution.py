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
