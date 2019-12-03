import numpy as np
def subsetsum(array,sums):
	n=len(array)
	array.insert(0,0)
	matrix=np.full((n+1,sums+1), False, dtype=bool)
	#print(matrix)
	matrix[0][0]=True
	for i in range(1,n+1):
		for j in range(0,sums+1):
			if(array[i]>j):
				matrix[i][j]=matrix[i-1][j]
			else:
				matrix[i][j]=matrix[i-1][j-array[i]]
	return matrix[n][sums]

ans=subsetsum([1,2,3,4,5,6,7,8,9,10,11,23],943)
print(ans)
