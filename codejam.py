inp = [[0,0,1,2],[1,0,0,0],[0,1,0,1],[1,1,0,0]]
i,j = 0,0
#4(horizontal for X and 0)
while i < 4:
    j = 0
    count1,count0 = 0,0
    while j < 4:
        if inp[i][j] == 1:
            count1+=1
        elif inp[i][j] == 0:
            count0+=1
        j+=1
    if count1 == 4:
        print "Player X Wins in row"
        break
    elif count0 == 4:
        print "Player 0 Wins in row"
        break
    i+=1
#4(vertical for X and 0)
count1,count0,i = 0,0,0
while i < 4:
    j = 0
    while j < 4:
        if inp[j][i] == 1:
            count1+=1
        elif inp[j][i] == 0:
            count0+=1
        j+=1
    if count1 == 4:
        print "Player X Wins in col"
        break
    elif count0 == 4:
        print "Player 0 Wins in col"
        break
    i+=1
#4(diagonal for X and 0)
count1,count=0,0
for i in range(4):
    if inp[i][i] == 1:
        count1+=1
    elif inp[i][i] == 0:
        count0+=1
if count1 == 4:
    print "Player X Wins in dia"
elif count0 == 4:
    print "Player 0 Wins in dia"
