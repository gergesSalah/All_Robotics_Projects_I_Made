import ast

def converter(l):
    try:
        return ast.literal_eval(l)
    except ValueError:
        return l

text = input()

lst = (list(map(converter,text.split())))
#print(lst)

i = 0
x = lst[0]
sr=[]
nt=[]
flot =[]
st = []

f = []
for i in lst:
    f.append(type(i))

#print(f)

h =0
for q in f:
  if "str" in q:
      sr.append(lst[h])
  if "int" in q:
      nt.append(lst[h])
  if "float" in q:
      flot.append(lst[h])
  if "list" in q:
      st.append(lst[h])
  h=h+1    

dic = {"<class 'str'>":sr,"<class 'int'>":nt,"<class 'float'>":flot,"<class 'list'>":st}
print(dic)

#while i<len(lst)-1:
 #   for type(y[i]) in f :
  #      y.append(lst[i])
   # i = i+1
    
#print(y)
#print(lst)
#print(lst)
#print(lst)

#i = 1
#dic = {type(lst[0]):"[{}]".format(lst[0])}
#print(dic)
#print(dic)
#print(dic[type(lst[0])])
#dic[type(lst[0])] = lst[1]
#print(dic)
#print(type(lst[i]),type(lst[i-1]))
#x,y = type(lst[i]),type(lst[i-1])
#print(x,y)
#print("{")
#while x == y and i <len(lst):
 #   str = "{}
  #  print("wdef")
 #   dic[type(lst[i-1])] = lst[1]
    #i = i+1

#print
#print(dic)