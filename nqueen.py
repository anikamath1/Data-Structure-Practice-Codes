import math
n=int(input("Enter the value of n"))
array=[-1]*n
count=0
#print(array)
def check(array,row,col,n):
    for rows in range(0,n):
        if(array[rows]==col):
            return False
        elif((math.fabs(rows-row)==math.fabs(col-array[rows])) and array[rows]!=-1):
            return False
    return True


def printconf(array,n):
    global count
    count+=1
    for i in range(0,n):
        for j in range(0,n):
            if(array[i]==j):
                print("1",end="\t")
            else:
                print("0",end="\t")
        print()


def nqueens(array,n,row):
    #print("Entered ",row," is the row value")
    if(row==n):
        #print("ROW==N")
        printconf(array,n)
    else:
        for cols in range(0,n):
            ans=check(array,row,cols,n)
            if(ans==True):
                array[row]=cols
                nqueens(array,n,row+1)
                array[row]=-1
                #print("Happening")
nqueens(array,n,0)
print(count,"--------- is the no of solutions")