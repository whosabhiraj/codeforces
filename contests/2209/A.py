import sys
input = sys.stdin.readline

t = int(input()) # test cases
answers = []

for _ in range(t):
    n, c, k = map(int, input().split())
    ai = list(map(int, input().split())) # elements
    ai.sort()
    for i in range(n):
        if ai[i] == c:
            c += ai[i]

        elif ai[i] > c:
            continue

        elif ai[i] < c:
            if k >= c - ai[i]:
                k -= c - ai[i]
                c *= 2
            else:
                c += ai[i] + k
                k = 0

    answers.append(c)

print(*answers, sep="\n")
