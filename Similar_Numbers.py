upper,lower = input('Enter upper:'),input('Enter lower:')
match,dmatch = 0,0
for i in range(upper,lower+1):
    for j in range(upper,lower+1):
        if i == j:
            continue
        if i<= 10*j and j<=10*i:
#           print 'i:',i
#           print 'j:',j
           match+=1
        else:
           dmatch+=1
print match
print dmatch
