case = int(input())
while case:
    num = int(input())
    result = 0 
    power = 1
    while True:
        base = 5**power
        result += num//base
        divide = num/base
        if(divide<1):
            break
        power+=1 
    print(result)
    case-=1

