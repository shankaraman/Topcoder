a = ["Bob: This is a long","sentence that takes 2 lines.","Tim: Yes it is.","Bob : I am not Bob.","Frank: No you aren't!"," Bob: Neither am I."]
emp = []
name = 'Bob'
for i in range(len(a)):
    j = 0
    while j < len(a[i]):
        if a[i][j] == ":":
            indexa = j
#            print ":",indexa
            while indexa < len(a[i]):
                k = 0
                while k < len(name):
                    if a[i][indexa] == name[k]:
                        emp.append(a[i][indexa])
                    k+=1
                indexa+=1
        j+=1
i,j=0,0
while i < len(emp):
    if emp[i] == name[0]:
        found = i
        if found:
            while j < len(name):
                if emp[found] == name[j]:
                    print "+1"
                found+=1
                j+=1
    i+=1
