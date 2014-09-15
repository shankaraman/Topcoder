alpha,alter = [],[]
key = input("Enter the Shift:")
string = raw_input("Enter the Plain Text:")
for i in range(97,123):
    alpha.append(chr(i))
i,lt,m,converted,p = 97,122,0,'',key-1
while i <= lt-key:
    if key == 0:
        print string
        break
    else:
        while p >= 0:
            alter.append(chr(lt-p))
            p-=1
        alter.append(chr(i))
    i+=1
while m < len(string):
    n = 0
    while n < len(alpha):
        if string[m] == alpha[n]:
            converted+=alter[n]
        n+=1
    m+=1
print converted
