
inp = open("the_price_is_correct.txt",'r')
output = open("solu.txt",'w')
t = int(inp.readline())
for i in range(t):
    a = inp.readline().split()
    n, p = int(a[0]),int(a[1])
    a = inp.readline().split()
    box_list = [int(j) for j in a]
    sol = 0
    pre_a = 1
    pre_b = 1
    cur_a = 1
    cur_b= 1
    for x in range(0,n,1):
        s = 0
        count = 0
        pre_a = cur_a
        pre_b = cur_b
        for y in range(x,n,1):
            s += box_list[y]
            count+=1
            cur_a = x+1
            cur_b = y+1
            if s > p:
                count-=1
                cur_b-=1
                break

        if count!=0:
            sol+=(count*(count+1)/2)
            if x!=0:
                common_e = pre_b - cur_a + 1
                if common_e>0:
                    sol-=(common_e*(common_e+1)/2)

    print("Case #"+str(i+1)+": "+str(sol))
    output.write("Case #"+str(i+1)+": "+str(sol)+"\n")



