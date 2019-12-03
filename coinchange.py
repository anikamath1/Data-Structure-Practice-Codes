import numpy as np
def coinchange(coins,value):
	n=len(coins)
	coins.insert(0,0)
	mat=np.zeros((n+1,value+1),dtype=int)
	for i in range(1,n+1):
		for j in range(0,value+1):
			if(coins[i]==j):
				mat[i][j]=1+mat[i-1][j]
			elif(coins[i]<j):
				mat[i][j]=mat[i][j-coins[i]]+mat[i-1][j]
			else:
				mat[i][j]=mat[i-1][j]
	return mat[n][value]
print(coinchange([2,5,3,6],10))
