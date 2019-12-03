//header file inclusion
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


int* completelyheapify(int *array,int length)
{	int counter=0;
	printf("the length now is %d\n",length);
	bool var=false;
	int lchild,rchild,parent;
	int greater,temp;
	while(var==false)
	{	
		var=true;
		//heapify once
		for(counter=0;counter<length;counter++)
		{	
			lchild=2*counter+1;
			rchild=2*counter+2;
			parent=counter;
			//if both are within range
			if(lchild<length && rchild<length)
			{	
				
				//both left and the right child exist
				if((array[lchild]>array[parent]) || (array[rchild]>array[parent]))
				{	var=false;
					if(array[lchild]>=array[rchild])
					{
						temp=array[parent];
						array[parent]=array[lchild];
						array[lchild]=temp;
					}
					else
					{
						temp=array[parent];
						array[parent]=array[rchild];
						array[rchild]=temp;
					}
				}
			}
			//only left child
			if((lchild<length) && (rchild>=length))
			{	
				if(array[lchild]>array[parent])
				{	var=false;
					temp=array[parent];
					array[parent]=array[lchild];
					array[lchild]=temp;
				}
			}
		}
	}
	
	return array;
	
}


//heap sort algo 
void sort(int *array,int length)
{	printf("entering the delete function\n");
	int counter,temp,sizeofarray;
	sizeofarray=length;	
	for(counter=0;counter<sizeofarray-1;counter++)
	{
		temp=array[length-1];
		array[length-1]=array[0];
		array[0]=temp;
		length--;
		array=completelyheapify(array,length);
	}
	printf("after applying heap sort we get\n");
	for(counter=0;counter<sizeofarray;counter++)
	{
		printf("%d\n",array[counter]);
	}

}	

int* completelyheapifyminheap(int *array,int length);
//heap sort algo 
void sortminheap(int *array,int length)
{	printf("entering the delete function\n");
	int counter,temp,sizeofarray;
	sizeofarray=length;	
	for(counter=0;counter<sizeofarray-1;counter++)
	{
		temp=array[length-1];
		array[length-1]=array[0];
		array[0]=temp;
		length--;
		array=completelyheapifyminheap(array,length);
	}
	printf("after applying heap sort we get\n");
	for(counter=0;counter<sizeofarray;counter++)
	{
		printf("%d\n",array[counter]);
	}

}	
	
	 


int* completelyheapifyminheap(int *array,int length)
{	int counter=0;
	printf("the length now is %d\n",length);
	bool var=false;
	int lchild,rchild,parent;
	int greater,temp;
	while(var==false)
	{	
		var=true;
		//heapify once
		for(counter=0;counter<length;counter++)
		{	
			lchild=2*counter+1;
			rchild=2*counter+2;
			parent=counter;
			//if both are within range
			if(lchild<length && rchild<length)
			{	
				
				//both left and the right child exist
				if((array[lchild]<array[parent]) || (array[rchild]<array[parent]))
				{	var=false;
					if(array[lchild]<=array[rchild])
					{
						temp=array[parent];
						array[parent]=array[lchild];
						array[lchild]=temp;
					}
					else
					{
						temp=array[parent];
						array[parent]=array[rchild];
						array[rchild]=temp;
					}
				}
			}
			//only left child
			if((lchild<length) && (rchild>=length))
			{	
				if(array[lchild]<array[parent])
				{	var=false;
					temp=array[parent];
					array[parent]=array[lchild];
					array[lchild]=temp;
				}
			}
		}
	}
	
	return array;
	
}

















void main()
{	int size,choice;
	int counter=0;
	int *pointer,*helpingpointer;
	printf("enter 1 for max heap\nenter 2 for min heap\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:	printf("enter the number of elements\n");
		scanf("%d",&size);
	
		//dynamic array creation using malloc
		pointer=(int*)malloc(size*sizeof(int));
	
		//taking input in an array
		for(counter=0;counter<size;counter++)
		{	
			printf("enter element\t");
			scanf("%d",&pointer[counter]);
		}
	
		//printing the entered elements
		printf("the elements in the array after taking input are\n");
		for(counter=0;counter<size;counter++)
		{
			printf("%d\n",pointer[counter]);
		}	
		helpingpointer=pointer;
		printf("after competely heapifying we get\n");
		//max heap considered
		pointer=completelyheapify(pointer,size);
		for(counter=0;counter<size;counter++)
		{
			printf("%d\n",pointer[counter]);
		}
		sort(pointer,size);
		break;
	
		case 2:	printf("enter the number of elements\n");
		scanf("%d",&size);

		//dynamic array creation using malloc
		pointer=(int*)malloc(size*sizeof(int));

		//taking input in an array
		for(counter=0;counter<size;counter++)
		{	
			printf("enter element\t");
			scanf("%d",&pointer[counter]);
		}
	
		//printing the entered elements
		printf("the elements in the array after taking input are\n");
		for(counter=0;counter<size;counter++)
		{
			printf("%d\n",pointer[counter]);
		}	
		helpingpointer=pointer;
		//min heap considered
		printf("considering min heap\n");
		helpingpointer=completelyheapifyminheap(helpingpointer,size);
		for(counter=0;counter<size;counter++)
		{
			printf("%d\n",pointer[counter]);
		}
		printf("sorting min heap\n");
		sortminheap(helpingpointer,size);
		break;
	}
	//switch case ends here
					
}	
	
/*
anikamath@ubuntu:~$ gcc heap.c
anikamath@ubuntu:~$ ./a.out
enter 1 for max heap
enter 2 for min heap
1
enter the number of elements
6
enter element	1
enter element	5
enter element	3
enter element	2
enter element	4
enter element	6
the elements in the array after taking input are
1
5
3
2
4
6
after competely heapifying we get
the length now is 6
6
4
5
2
1
3
entering the delete function
the length now is 5
the length now is 4
the length now is 3
the length now is 2
the length now is 1
after applying heap sort we get
1
2
3
4
5
6


//ouput 1 ends here
anikamath@ubuntu:~$ gcc heap.c
anikamath@ubuntu:~$ ./a.out
enter 1 for max heap
enter 2 for min heap
2
enter the number of elements
6
enter element	5
enter element	3
enter element	6
enter element	1
enter element	2
enter element	4
the elements in the array after taking input are
5
3
6
1
2
4
considering min heap
the length now is 6
1
2
4
5
3
6
sorting min heap
entering the delete function
the length now is 5
the length now is 4
the length now is 3
the length now is 2
the length now is 1
after applying heap sort we get
6
5
4
3
2
1


		
*/	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
