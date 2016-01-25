import math

def nCr(n,r):
    f = math.factorial
    return f(n) / f(r) / f(n-r)


output = open("solu_example.txt",'w')
inp = open("boomerang_constellations_example_input.txt",'r')
t = int(inp.readline())
for i in range(t):
    n = int(inp.readline())
    pts = []
    sol = 0
    for j in range(n):
        a = inp.readline().split()
        pts.append([int(a[0]),int(a[1])])
    for p in range(0,n,1):
        dist = {}
        for q in range(0,n,1):
            x = pts[q][0]
            y = pts[q][1]
            distance = math.sqrt((x-pts[p][0])**2+(y-pts[p][1])**2)
            if distance not in dist:
                dist[distance] = 1
            else:
                dist[distance]+=1

        #print(dist)
        for q,value in dist.iteritems():
            if value >= 2:
                sol+=nCr(int(value),2)
    print("Case #"+str(i+1)+": "+str(sol))
    output.write("Case #"+str(i+1)+": "+str(sol)+"\n")


