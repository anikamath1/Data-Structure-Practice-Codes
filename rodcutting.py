
def findmax(n):
	global prices,mat
	if(n>=1):
		if(n==1):
			mat[n]=prices[n]
			return mat[n]
		if(mat[n]!=0):
			return mat[n]
		mat[n]=max([(prices[i]+findmax(n-i))for i in range(1,n)])
		mat[n]=max(mat[n],prices[n])
		return mat[n]
prices=[0,1,5,8,9,10,17,17,20]
mat=[0,0,0,0,0,0,0,0,0]
print(findmax(8))
print(mat)
