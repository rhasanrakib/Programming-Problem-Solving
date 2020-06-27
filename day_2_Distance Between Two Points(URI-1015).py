if __name__ == "__main__":
    a,b = input().split()
    c,d = input().split()
    [a,b,c,d]=[float(a),float(b),float(c),float(d)]
    dis = ((a-c)**2+(b-d)**2)**0.5
    print("%.4f" %dis)

    