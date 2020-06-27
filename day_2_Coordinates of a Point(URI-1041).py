
if __name__ == "__main__":

    a,b = input().split()
    [a,b]=[float(a),float(b)]

    if a==0 and b==0:
        print("Origem")
    elif a<0 and b<0:
        print("Q3")
    elif a<0 and b>0:
        print("Q2")
    elif a>0 and b<0:
        print("Q4")
    elif a>0 and b>0:
        print("Q1")
    elif a==0:
        print("Eixo Y")
    else:
        print("Eixo X")