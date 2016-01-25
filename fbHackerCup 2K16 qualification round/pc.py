inp = open("the_price_is_correct.txt",'r')
output = open("solu.txt",'w')
t = int(inp.readline())
for i in range(t):
    a = inp.readline().split()
    n, p = int(a[0]),int(a[1])
    a = inp.readline().split()
    box_list = [int(j) for j in a]
    s = 0
    j = 0
    sol = 0
    q = []
    while j<n:
        while j<n and s+box_list[j]<=p:
            q.append(box_list[j])
            s+=box_list[j]
            j+=1
        if len(q)!=0:
            sol+=len(q)
            x = q.pop(0)
            s-=x
        else:
            j+=1
    sol+=(len(q)*(len(q)+1)/2)
    if i!= t:
        print(sol)
        output.write("Case #"+str(i+1)+": "+str(sol)+"\n")
        print("Case #"+str(i+1)+": "+str(sol)+"\n")
    else:
        output.write("Case #"+str(i+1)+": "+str(sol))
        print("Case #"+str(i+1)+": "+str(sol)+"\n")