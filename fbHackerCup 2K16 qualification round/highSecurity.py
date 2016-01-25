
inp = open("high_security_example_input.txt",'r')
t = int(inp.readline())
for i in range(t):
    n = int(inp.readline())
    r1 = list(inp.readline())
    r2 = list(inp.readline())
    r1.pop()
    r2.pop()
    sol = 0
    for j in range(0,n-2,1):
        if r1[j] is 'X' and r1[j+2] is 'X' and r2[j+1] is '.':
            r2[j+1] = 'G'
            if r1[j+1]!='X':
                r1[j+1] = '*'
            sol+=1
            p = j+2
            while p < n and r2[p]!= 'X' :
                r2[p] = '*'
                p+=1
            p = j
            while p > -1 and r2[p]!= 'X' :
                r2[p] = '*'
                p-=1
    for j in range(0,n-2,1):
        if r2[j] is 'X' and r2[j+2] is 'X' and r1[j+1] is '.':
            r1[j+1] = 'G'
            if r2[j+1]!='X':
                r2[j+1] = '*'
            sol+=1
            p = j+2
            while p < n and r1[p]!= 'X':
                r1[p] = '*'
                p+=1
            p = j
            while p > -1 and r1[p]!= 'X':
                r1[p] = '*'
                p-=1
    for j in range(0,n-2,1):
        if r2[j] is 'X' and r2[j+2] is 'X' and r1[j+1] is '*':
            r2[j+1] = 'G'
            sol+=1
        if r1[j] is 'X' and r1[j+2] is 'X' and r2[j+1] is '*':
            r1[j+1] = 'G'
            sol+=1
    ####
    for j in range(0,n-1,1):
        if r1[j] is '.' and r1[j+1] is '.' and (r2[j] is '.' or r2[j] is '*') and r2[j+1] is 'X':
            r1[j] = 'G'
            sol+=1
            r2[j] = '*'
            p = j+1
            while p < n and r1[p]!= 'X':
                r1[p] = '*'
                p+=1
            p = j-1
            while p >=0 and r1[p]!= 'X':
                r1[p] = '*'
                p-=1
    ####
    for j in range(n-1,-1,-1):
        if r2[j] is '.' and r2[j-1] is '.' and (r1[j] is '.' or r1[j] is '*') and r1[j-1] is 'X':
            r2[j] = 'G'
            sol+=1
            r1[j] = '*'
            p = j+1
            while p < n and r2[p]!= 'X':
                r2[p] = '*'
                p+=1
            p = j-1
            while p >=0 and r2[p]!= 'X':
                r2[p] = '*'
                p-=1




    print(r1)
    print(r2)
    print(sol)



