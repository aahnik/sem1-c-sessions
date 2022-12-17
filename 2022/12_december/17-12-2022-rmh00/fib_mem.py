import time

fibo = {}  # cache


def fib(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    if n in fibo:
        return fibo[n]
    fibo[n] = fib(n - 1) + fib(n - 2)
    return fibo[n]


start = time.time()
count = 0
while count < 30:
    print(f"{count}:{fib(count)}")
    count += 1
end = time.time()
print(f"Time taken to execute the program = {end - start}")
