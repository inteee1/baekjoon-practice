G = ['A+', 'A0', 'B+', 'B0', 'C+', 'C0', 'D+', 'D0', 'F']
S = [4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0]

T = 0.0
R = 0.0

for _ in range(20):
    subject, score, grade = input().split()
    score = float(score)
    if grade != 'P':
        T += score
        R += score * S[G.index(grade)]

print('%.6f'% (R/T))