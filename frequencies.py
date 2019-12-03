from _ast import keyword


class Data:
    def __init__(self,number=0,actual=0,occurrence=0,index=0):
        self.number=number
        self.actual=actual
        self.occurrence=occurrence
        self.index=index

    def display(self,array):
        n=len(array)
        ans=[]
        for object in array:
            for i in range(object.actual):
                ans.append(object.number)
        print(ans)

array=list(map(int,input().split(" ")))
unique=list(set(array))
print(unique)
print(unique)
objarray=[]
for number in unique:
    obj=Data(number,array.count(number),array.count(number)*10000,unique.index(number))
    objarray.append(obj)

#Important
newlist = sorted(objarray,key=lambda x:(x.occurrence,-x.index))
Data().display(newlist)