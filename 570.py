limit,moves = input("Enter the char limit:"),input("Enter the moves:")
start,goal = [],[]
for i in range(limit):
    start.append(raw_input("Enter the Start:"))
for i in range(limit):
    goal.append(raw_input("Enter the Goal:"))

def fn(start,goal,moves):
    while moves>0:

