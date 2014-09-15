#DECLARATION

import math,decimal
#string = [[0,1,3,0,4,0],[1,0,0,0,1,0],[3,0,0,0,6,0],[0,0,0,0,0,8],[4,1,6,0,0,0],[0,0,0,8,0,0]]
string = [[0,9,9,9],[9,0,9,9],[9,9,0,9],[9,9,9,0]] 
#tring = [[0,1,3,0,4,0],[1,0,0,0,1,0],[3,0,0,0,6,0],[0,0,0,0,0,8],[4,1,6,0,0,0],[0,0,0,8,0,0]]

iterator,combination,traversal1,traversal2,result = 0,0,0,0,0

#POSSIBLE COMBINATIONS

while iterator < len(string):
    combination = float(combination + iterator)
    iterator+=1
print 'Possible Combinations for the strings are:',combination

#ALGORITHM

while traversal1 < len(string):
    traversal2 = traversal1+1
    while traversal2 < len(string):
        result = string[traversal1][traversal2] + result
        traversal2+=1
    traversal1+=1
print float(result/combination)

#SAMPLE INPUTS


string = [[0,9,9,9],[9,0,9,9],[9,9,0,9],[9,9,9,0]]
[0,1,3,0,4,0],[1,0,0,0,1,0],[3,0,0,0,6,0],[0,0,0,0,0,8],[4,1,6,0,0,0],[0,0,0,8,0,0] 

