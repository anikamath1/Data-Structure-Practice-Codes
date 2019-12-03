def subsetsum(array,index,sumx):
	print("sum value is ",sumx)
	if(index<0 and sumx>0):
		return False
	elif(sumx==0):
		return True
	elif(index>=0):
		ans1=subsetsum(array,index-1,sumx-array[index])
		ans2=subsetsum(array,index-1,sumx)
		if(ans1):
			return ans1
		else:
			return ans2
ans=subsetsum([1,2,3],2,6)
print(ans)