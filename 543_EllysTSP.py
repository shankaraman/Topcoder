string = raw_input("Enter the pattern in caps, only letters C and V:")
iterator,c,v = 0,0,0
lst1,lst2,lst3 = [],[],[]
while iterator < len(string):
    if string[iterator] == 'C':
        c+=1
    else:
        v+=1
    iterator+=1
print 'C:',c,'V:',v
iterator = 0
while iterator < len(string):
    if string[iterator] == 'V':
        lst1.append(string[iterator])
    else:
        lst2.append(string[iterator])
    iterator+=1
iterator = 0
if v == c:
    print v+c
if v > c:
    while iterator < len(lst2):
        lst3.append(lst1[iterator])
        lst3.append(lst2[iterator])
        iterator+=1
    lst3.append('V')
iterator = 0
if c > v:
    while iterator < len(lst1):
        lst3.append(lst2[iterator])
        lst3.append(lst1[iterator])
        iterator+=1
    lst3.append('C')
print 'Possible Path:',lst3,'Length:',len(lst3)
