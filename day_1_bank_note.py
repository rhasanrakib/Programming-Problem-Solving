
notes =[100,50,20,10,5,2,1]
if __name__ == "__main__":

    note = int(input())
    for i in range(7):
        if(note>=notes[i]):
            print(note // notes[i]," note(s) of R$ ",notes[i])
            note%=notes[i]
        else:
            print("0 note(s) of R$ ",notes[i])