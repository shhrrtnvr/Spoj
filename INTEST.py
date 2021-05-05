import sys
input = sys.stdin.readline
n, k = map(int, input().split())
print(sum( (val%k==0 for val in (int(input()) for _ in range(n)) ) ))