array=list(map(int,input().split(" ")))
sums=int(input("Enter sum "))
n=len(array)
arr=[0]*n


def display(buffer):
    ans=[num for num in buffer if(num!=0)]
    print(ans)

def subsetsum(array,sums,i,index,buffer,n):
    if(sum(buffer)==sums):
        display(buffer)
        return
    if(i<n):
        if((array[i]+sum(buffer))<=sums):
            subsetsum(array,sums,i+1,index,buffer,n)
            buffer[index]=array[i]
            subsetsum(array,sums,i+1,index+1,buffer,n)
            buffer[index]=0
            #print(buffer)
        else:
            subsetsum(array,sums,i+1,index,buffer,n)
subsetsum(array,sums,0,0,arr,len(array))