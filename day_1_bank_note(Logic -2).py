# Uri Online Judge (1018)
# ©Asraf Nabil
money = int(input())
lst = [100, 50, 20, 10, 5, 2, 1]

for i in lst:
	print(money//i, "notes of R$", i)
	money %= i