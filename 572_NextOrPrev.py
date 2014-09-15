def fn(n,p,s,g):
    lst=[]
    for i in range(len(s)):
        cost = 0
        if ord(s[i])>ord(g[i]):
            lt1 = ord(s[i]) - ord(g[i])
            for i in range(lt1):
                cost+=p
            lst.append(cost)
            print 'Start Greater:',cost

        else:
            lt2 = ord(g[i])-ord(s[i])
            for i in range(lt2):
                cost+=n
            print 'Goal greater:',cost
            lst.append(cost)
    print "Final Cost:",sum(lst)
print fn(input('Enter n'),input('Enter p:'),input('Enter s:'),input('Enter g:'))
