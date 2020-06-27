# Uri Online Judge (1018)


notes = [100, 50, 20, 10, 5, 2, 1]
if __name__ == "__main__":

    note = int(input())
    print(note)
    for i in range(7):
        if(note >= notes[i]):
            print('{0} nota(s) de R$ {1},00'.format(note // notes[i],notes[i]))
            #print(note // notes[i], "nota(s) de R$", notes[i]+",00")
            note %= notes[i]
        else:
           print('0 nota(s) de R$ {0},00'.format(notes[i]))
