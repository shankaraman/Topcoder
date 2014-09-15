a = ["Crazy1010: !@LK%#L%K @#L%K @#L%K@#L%K2kl53k2","Bob: You are crazy.","Crazy1010 Yup #@LK%$L!K%LK%!K% !K afmas,"]
emp,check,new = [],[],[]
name,string = "Crazy1010",''
final = 0
count = 0
match = name+":"
for i in range(len(match)):
    check.append(match[i])
for i in range(len(a)):
    j,string = 0,''
    while j < len(match):
        emp.append(a[i][j])
        j+=1
for i in range(len(emp)):
    string+=emp[i]
    if len(string)%len(match) == 0:
        new.append(string)
        string = ''
for i in range(len(new)):
    if new[i] == match:
        print "+1"
print emp
