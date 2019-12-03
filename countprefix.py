def solve(array,L,R,K,N):
	i=L-1
	if(R==N):
		return N
	while (i<R and array[i]%K==0):
		i+=1
	if(i==L-1):
		return -1
	else:
		return i
N=int(input())
array=list(map(int,input().split(" ")))
Q=int(input())
ans=[]
for i in range(0,Q):
	L,R,K=map(int,input().split(" "))
	ans.append(solve(array,L,R,K,N))	
for j in ans:
	print(j)
