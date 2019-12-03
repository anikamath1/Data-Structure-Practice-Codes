def minSwaps(arr): 
	n=len(arr)
	vis=[False for i in range(n)]
	arr=[*enumerate(arr)]
	arr.sort(key = lambda x : x[1])
	cycle=0
	for i in range(n):
		if(arr[i][0]==i or vis[i]==True):
			continue
		else:	
			count=0
			j=i
			while not vis[j]:
				vis[j]=True
				j=arr[j][0]
				count+=1
			cycle+=(count-1)
	return cycle
arr = [4,3,1,2] 
print(minSwaps(arr))
