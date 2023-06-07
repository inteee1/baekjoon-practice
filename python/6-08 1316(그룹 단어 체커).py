n = int(input())
count = n	

for i in range(n):
    S = input()
    for j in range(0, len(S)-1):
        if S[j] == S[j+1]:
            pass
        elif S[j] in S[j+1:]:
            count -= 1
            break
print(count)
	
