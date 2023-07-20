impar = [0,1,2,3,4]
par = [0,1,2,3,4]
lst = []
count5_par = 0
count5_impar = 0
par_impar_lst = []
#par_impar_lst_count = 0
for i in range(0,15):
    lst.append(int(input()))
    #lst[i] = int(input())
    #completed lst 
    
for i in range(0,15):
    x = lst[i]
    if x%2 == 0:
        par[count5_par] = x
        print("par[{}] = {}".format(count5_par,par[count5_par]))
        count5_par+=1
    else:
        impar[count5_impar] = x
        print("impar[{}] = {}".format(count5_impar,impar[count5_impar]))
        count5_impar+=1
        
    if count5_par >= 5:
        par_impar_lst.append(par)
        count5_par = 0
        
    if count5_impar >= 5:
        par_impar_lst.append(impar)
        count5_impar = 0

#print(par_impar_lst)