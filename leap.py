def is_leap(year):
    leap = False
    if int(year)%4 == 0:
        leap = True
    if int(year)%100 ==0:
        leap = False
    if int(year)%400 == 0:
        leap = True
    return leap

year = input()
print(is_leap(year))
            