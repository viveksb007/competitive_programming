t = int(input())
for i in range(0, t, 1):
    a = str(input())
    dollarPos = a.find('$')
    b = a[dollarPos:].replace(' ', '')
    for j in range(0, len(b), 1):
        if j == len(b) - 1:
            if b[j].isalpha():
                break
            else:
                j += 1
                break
        if b[j].isalpha():
            break
    c = b[1:j]
    d = c.lstrip('0')
    if len(d)==0:
        print('$0')
    else:
        print('$'+d)

