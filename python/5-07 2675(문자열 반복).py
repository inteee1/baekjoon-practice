N = int(input())
for i in range(N):

    M, S = input().split()
    M = int(M)
    S = str(S)
    
    for j in range(len(S)):
        print(M * S[j]) 
    print()
    
    
# a = int(input())
# result = []

# for i in range(a):
#     t = list(input().split())
#     result.append(t)
        
# print(result, axis = 1)
