def solve(array,n):
	array.sort()
	a=array[0]*array[1]
	b=array[n-1]*array[n-2]
	if(a>b):
		return a
	else:
		return b
testcases=int(input())
ans=[]
for i in range(0,testcases):
	n=int(input())
	array=list(map(int,input().split(" ")))
	ans.append(solve(array,n))
for j in ans:
	print(j)
