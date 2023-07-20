def is_leap(year):   
    leap = False
    
    s=int(year)/400

#print(s)
#print(type(s))
    x = str(s)
    temp=0
    for i in range(0,len(x)):
        if x[i] == '.':
            temp = i
        

    if x[temp+1] == '0' or type(s) == "<class 'int'>" or temp == 0:
        leap = True
    return leap

inpu = input()
print(is_leap(inpu))