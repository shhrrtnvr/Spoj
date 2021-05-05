primes = list()
N = 10**4+1
isPrime = [True]*N
isPrime[0], isPrime[1] = False, False
for i in range(2, N):
    if i*i > N:
        break
    if isPrime[i]:
        for j in range(i*i, N, i):
            isPrime[j] = False
for i, v in enumerate(isPrime):
    if v:
        primes.append(i)

for _ in range(int(input())):
    n = int(input())
    ans = 1
    for v in primes:
        if v*v > n:
            break
        c = 0
        while n and n % v == 0:
            n, c = n//v, c+1
        ans = max(ans, c)
    print(ans)