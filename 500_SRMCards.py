#a = input("Enter the number of elements:")
i = 0
a = [1,2,3,4,5,6,7,8,9,10,11,12,12,14]
"""for i in range(a):
    lst.append(int(raw_input("Enter the elements:")))"""
a.sort()
if a[0]+1 == a[1] :
    a[0],a[1]=0,0
    i = 2
if a[len(a)-1] == a[len(a)-2]+1:
    a[len(a)-1],a[len(a)-2] = 0,0
    j = len(a)-3
else:
    a[0],a[len(a)-1] = 0 ,0
    i = 1
    j = len(a)-1
while i <= j:
    print a[i]
    #    if a[i] == a[i]-1:
    i+=1
