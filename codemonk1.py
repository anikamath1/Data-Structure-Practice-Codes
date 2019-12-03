import numpy as np
capacity=[]
weights=[]
noofcakes=[]
canitbechecked=[]
cakeschecked=[]
from numpy import ones


		
	




def check(capacity,cap,weights,noofcakes):
	for j in weights:
		if(cap>=j and noofcakes[weights.index(j)]>0 and checkwhetherdone(j,canitbechecked,weights,noofcakes,capacity)):
			noofcakes[weights.index(j)]-=1
			canitbechecked[capacity.index(cap)]=0
			break

def solve(capacity,weights,noofcakes):
	print("entered")
	global canitbechecked,cakeschecked
	canitbechecked=ones([len(weights)])
	cakeschecked=ones([len(weights)])
	counter=1
	if(max(capacity)<max(weights)):
		return -1
	else:
		while(any(noofcakes)):
			for cap in capacity:
				check(capacity,cap,weights,noofcakes)
			print(noofcakes)
			print("ROUND NUMBER",counter)
			counter+=1
			canitbechecked=ones([len(weights)])
			cakeschecked=ones([len(weights)])
	print("do--",all(noofcakes))
	print(noofcakes)
			
				
			
n=int(input("Enter the test cases"))
canitbechecked=ones([])
for i in range(n):
	capacity=input().split(" ")
	weights=input().split(" ")
	noofcakes=input().split(" ")
	capacity = list(map(int, capacity))
	weights = list(map(int, weights))
	noofcakes = list(map(int, noofcakes))
	#print("done")
	solve(capacity,weights,noofcakes)
