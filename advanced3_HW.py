from typing import *

def generaterow(row):
	ans=1
	ansrow=[1]
	
	for col in range(1,row):
		ans*=(row-col)
		ans//=col
		ansrow.append(ans)
	return ansrow
	
def pascaltriangle(n : int) ->List[List[int]]:
	ans=[]
	
	for row in range(1,n+1):
		ans.append(generaterow(row))
	return ans

if __name__=="__main__":
	n=5
	ans=pascaltriangle(n)
	for it in ans:
		for ele in it:
			print(ele,end=" ")
		print()
