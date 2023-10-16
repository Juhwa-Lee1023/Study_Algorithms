MOD = 1000000000
SIZE = 2000001
fibo = [0] * SIZE

def precomputeFibonacci():
    fibo[0] = 0
    fibo[1] = 1

    for i in range(2, SIZE):
        fibo[i] = (fibo[i - 1] + fibo[i - 2]) % MOD

n = int(input())

precomputeFibonacci()

if n == 0:
    print(0)
    print(0)
elif n > 0:
    print(1)
    print(fibo[n])
else:  # n < 0
    n = abs(n)
    if n % 2 == 0:
        print(-1)
    else:
        print(1)
    print(fibo[n])
