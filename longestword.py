def longerstword(st):
	data = []
	temp = ''
	c = 0
	for i in st:
		c += 1
		if i!=' ':
			temp = temp+i
			if i==' ' or c==len(st):
				print(temp)
				data.append(temp)
				temp = ''
	print(data)			
longerstword('hello in from fucking earth')
