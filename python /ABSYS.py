t = int(input())
for i in range(0,t):
	space = input()
	inp = input()
	marker = inp.find("machula")
	eq = inp.find('=')
	plus = inp.find('+')
	if marker < plus :
		anum = int(inp[plus+1:eq-1])
		bnum = int(inp[eq+1:])
		print(str(bnum-anum)+inp[plus-1:])
		
	elif marker > plus and marker < eq :
		anum = int(inp[0:plus-1])
		bnum = int(inp[eq+1:])
		print(inp[0:plus+1],str(bnum-anum)+inp[eq-1:])
		
	else: 
		anum = int(inp[0:plus-1])
		bnum = int(inp[plus+1:eq-1])
		print(inp[:eq+1]+str(anum+bnum))
		