array=list(map(int,input().split(" ")))
nums=list(set(array))
occ=[]
for num in nums:
    count=array.count(num)
    occ.append((int(num),int(count)))
ans=[]
print(occ)
occ.sort(key=lambda x: x[1],reverse=True)
print(occ)
for number,count in (occ):
    for i in range(count):
        ans.append(number)
print (ans)