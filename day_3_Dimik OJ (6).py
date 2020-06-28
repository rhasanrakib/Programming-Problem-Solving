#©Asraf Nabil
times = int(input())

nums = [input() for i in range(times)]

[print("sum = " + str(int(i[0]) + int(i[-1]))) for i in nums]
