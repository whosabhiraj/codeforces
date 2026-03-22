import sys
input = sys.stdin.readline

t = int(input()) # test cases

for _ in range(t):
    n = int(input()) # no. of elements
    a = list(map(int, input().split())) # elements
    
    ans = []
    for i in range(n):
        gt = 0
        lt = 0

        for j in range(i+1, n):
            if a[j] > a[i]:
                gt += 1
        for j in range(i+1, n):
            if a[j] < a[i]:
                lt += 1

        ans.append(max(gt, lt))
        
    print(*ans)
