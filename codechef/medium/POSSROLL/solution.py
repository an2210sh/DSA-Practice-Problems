# cook your dish here
def check_die_roll(X, K, Y):
    if Y % K == 0 and 1 <= Y // K <= X:
        return "YES"
    return "NO"