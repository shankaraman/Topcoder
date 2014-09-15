s='zyxw'
g='vuts'
diff = 0
great=''
for i in range(len(s)):
    diff = ord(s[i])-ord(g[i])
    start = ord(s[i])
    k = 0
    while k <= diff:
        great+=chr(start)
        start-=1
        k+=1
print great[(len(great)-len(s)):len(great)]
