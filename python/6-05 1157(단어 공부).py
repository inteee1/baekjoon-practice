S = input().upper()
S_list = list(set(S))
A = []
for i in S_list:
    count = S.count(i)
    A.append(count)
    
if A.count(max(A)) > 1:
    print("?")
else:
    print(S_list[(A.index(max(A)))])
	
