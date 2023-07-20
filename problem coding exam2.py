lst = [0,1,2,3,4,5,6,7,8,9]
for i in range(0,10):
    x = int(input())
    if x <= 0:
        x = 1
    lst[i] = x
    
for i in range(0,10):
    print("x[{}] = {}".format(i,lst[i]))