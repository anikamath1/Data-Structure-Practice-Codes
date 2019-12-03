count=0
def combinations(array,l,r,index,i,temp,n):

    global count
    if (index == r):
        count+=1
        print(list(temp))
        return

    if(i>=n):
        return
    else:
        temp[index]=array[i]
        combinations(array,l,r,index+1,i+1,temp,n)
        combinations(array,l,r,index,i+1,temp,n)


array=[1,2,3,4,5,6,7,8,9,10,11]
start=0
r=4
temp=[0]*r
index=0
n=len(array)
combinations(array,start,r,index,0,temp,n)
print(count)
