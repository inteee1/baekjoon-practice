
A, B = [], []

n, N = map(int, input().split())

for row in range(n):
    row = list(map(int, input().split()))
    A.append(row)
    
for row in range(n):
    row = list(map(int, input().split()))
    B.append(row)
for row in range(n):
    for col in range(N):
        print(A[row][col] + B[row][col], end= ' ')
    print()
