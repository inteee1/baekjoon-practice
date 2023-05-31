INPUT = list(input())
num = 0
for i in range (len(INPUT)):
	if ord(INPUT[i]) >= 65 and ord(INPUT[i]) <= 67:
			num += 3
	if ord(INPUT[i]) >= 68 and ord(INPUT[i]) <= 70:
			num += 4	
	if ord(INPUT[i]) >= 71 and ord(INPUT[i]) <= 73:
			num += 5
	if ord(INPUT[i]) >= 74 and ord(INPUT[i]) <= 76: 
			num += 6
	if ord(INPUT[i]) >= 77 and ord(INPUT[i]) <= 79:
			num += 7
	if ord(INPUT[i]) >= 80 and ord(INPUT[i]) <= 83:
			num += 8
	if ord(INPUT[i]) >= 84 and ord(INPUT[i]) <= 86:
			num += 9
	if ord(INPUT[i]) >= 87 and ord(INPUT[i]) <= 90:
			num += 10
		
print(num)
