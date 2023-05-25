
def rearragestring(s,index):
	a=[]
	i=0
	j=0
	
	for ii in str(s):
		a.append(ii)
	
	b=a[:]
	
	while j<len(a) and i<len(index):
		k=index[i]
		temp=a[j]
		b[k]=temp
		j+=1
		i+=1
	s=''
	
	for i in range(len(b)):
		s+=b[i]
	print(s)
	
s="ahpyp"
index=[1,0,2,4,3]
rearragestring(s,index)

