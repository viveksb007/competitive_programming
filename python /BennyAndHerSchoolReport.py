t = int(input())
for i in range(0,t,1):
    a = input().split()
    n, m, x = int(a[0]), int(a[1]), int(a[2])
    a = input().split()
    marksList = [int(p) for p in a]
    sumT = 0
    for j in range(0,len(marksList),1):
        sumT+=marksList[j]
    ans = (n+1)*x - sumT
    if ans <= 0:
        print('1')
    elif ans <= m:
        print(ans)
    else:
        print('Impossible')
