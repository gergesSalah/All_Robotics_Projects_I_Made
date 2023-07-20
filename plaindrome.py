def plaindrome(str1):
    str2 = str1[::-1]
    print(str1)
    print(str2)
    if str2==str1:
        return True
    else:
        return False


print(plaindrome("hi, iam mai ih"))