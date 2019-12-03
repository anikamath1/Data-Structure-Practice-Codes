
def substrCount(n, s):
	char=[]
	freq=[]
	count=1
	for i in range(n):
		for j in range(i+1,n):
			if(s[i]==s[j]):
				count+=1
				i+=1
			else:
				char.append(s[i])
				freq.append(count)
				count=1	
				break
	char.append(s[-1])
	freq.append(count)
	#print(char)
	#print(freq)
	for i in range(n):
		num
		total=(num*(num+1))/2
		if(i>0 and i<n-1 and s[i-1]==s[i+1] and s[i]!=s[i+1])
			total+=min(s[i-1],s[i+1])
	
	
		
substrCount(5,'aaaaa')
