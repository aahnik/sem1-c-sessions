def sum_n(n):
    # print(f"function got called with {n}")
    if (n==1):
        # print("base case reached")
        return 1
    return sum_n(n-1) + n

ans = sum_n(10)
print(ans)
