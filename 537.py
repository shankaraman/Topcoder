v = ['a','e','i','o','u']
i,j,deep = 0,0,0
string = raw_input("Enter the String:")
if len(string) == 8:
    while i<len(v):
        j,count=0,0
        while j<len(string):
            if v[i] == string[j]:
                count+=1
                if count>2:
                    print "More Vowels"
                    exit
                elif count == 2:
                    print "+1"
            j+=1
        i+=1
else:
    print "Length of string is not sufficient"
