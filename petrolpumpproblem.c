#include<stdio.h>
#include<stdlib.h>

//declaring structure 
struct petrolpump
{
  int distance;
  int petrol;
  struct petrolpump *next;
};

//function to create node
struct  petrolpump* CreateNode(int m)
{		int n,i;
		n=m;
		struct petrolpump *ptr,*head,*ptr1;
		ptr=(struct petrolpump*)malloc(1*sizeof(struct petrolpump));
		head=ptr;
		for(i=1;i<=n-1;i++)
		{
			ptr1=(struct petrolpump*)malloc(1*sizeof(struct petrolpump));
			ptr->next=ptr1;
			ptr=ptr1;
		}
		
		ptr1->next=head;
		return head;
}


//function to take input from user
void GetInfo(struct  petrolpump* head,int n)
{
	int i;
	struct  petrolpump* pointer;
	pointer=head;
	for(i=1;i<=n;i++)
	{
		printf("enter the amount of petrol in the petrol pump\n");
		scanf("%d",&(pointer->petrol));
		printf("enter the distance to the next petrol pump\n");
		scanf("%d",&(pointer->distance));
		pointer=pointer->next;//going to the next petrolpump
	}
	
}

//function to find the starting point
void FindStart(struct  petrolpump* head,int n)
{


	int currentpetrol,i,flag,counter,k,t,start;
	struct  petrolpump *pointer,*j,*temp;
	for(pointer=head,i=1;i<=n;i++,pointer=pointer->next)
	{
		j=pointer;
		currentpetrol=0;
		flag=1;
		
		for(counter=1;counter<=n;counter++)
		{ 	temp=j;
			currentpetrol=currentpetrol+j->petrol;
			//checking whether bus can reach next petrol pump
			if(currentpetrol < j->distance)
			{
				flag=0;
				break;
			}
			//going to the next petrol pump
			j=j->next;
			//updating the value of petrol in the bus
			currentpetrol -= temp->distance;
			 
		}
		
		if(flag!=0)
		{
			printf("Node Number %d can be starting node\n",i);
			start=i;
			printf("the route is \n");
			//printing the route
			for(k=0;k<=n-1;k++)
			{	t=(start + k)%(n+1);
				if(t !=0)
				{
					printf("%d-",t);
				}
				else
				{
					break;
				}
			}
				
			for(k=k;k<=n;k++)
			{
				
				t=(start + k)%(n+1);
				printf("%d-",++t);
			}
			
			printf("\n");
			break;
		}
	}
	if(flag==0)
	{
		printf("no starting point\n");
	}
		
}	
	
		
			
			
void main()
{	

	int m;
	struct petrolpump *head;
	printf("Enter number of petrol pumps\n");
	scanf("%d",&m);
	printf("invoking CreateNode function\n");
	head=CreateNode(m);
	printf("CreateNode function done\n");
	printf("invoking GetInfo function\n");
	GetInfo(head,m);
	printf("GetInfo function done\n");
	printf("invoking FindStart function\n");
	FindStart(head,m);
	printf("FindStart function done\n");
}
	
	//no solution exists
/*anikamath@ubuntu:~/Desktop$ gcc exp1.c
anikamath@ubuntu:~/Desktop$ ./a.out
Enter number of petrol pumps
4
invoking CreateNode function
CreateNode function done
invoking GetInfo function
enter the amount of petrol in the petrol pump
10
enter the distance to the next petrol pump
20
enter the amount of petrol in the petrol pump
30
enter the distance to the next petrol pump
40
enter the amount of petrol in the petrol pump
50
enter the distance to the next petrol pump
60
enter the amount of petrol in the petrol pump
70
enter the distance to the next petrol pump
80
GetInfo function done
invoking FindStart function
no starting point
FindStart function done
*/


//all petrol pumps have sufficient petrol
/*
anikamath@ubuntu:~/Desktop$ gcc exp1.c
anikamath@ubuntu:~/Desktop$ ./a.out
Enter number of petrol pumps
5
invoking CreateNode function
CreateNode function done
invoking GetInfo function
enter the amount of petrol in the petrol pump
90
enter the distance to the next petrol pump
80
enter the amount of petrol in the petrol pump
80
enter the distance to the next petrol pump
70
enter the amount of petrol in the petrol pump
70
enter the distance to the next petrol pump
60
enter the amount of petrol in the petrol pump
60
enter the distance to the next petrol pump
50
enter the amount of petrol in the petrol pump
40
enter the distance to the next petrol pump
30
GetInfo function done
invoking FindStart function
Node Number 1 can be starting node
the route is 
1-2-3-4-5-1-
FindStart function done
*/

//atleast 1 petrol pump contains petrol>distance but path cannot be completed	
/*
anikamath@ubuntu:~/Desktop$ gcc exp1.c 
anikamath@ubuntu:~/Desktop$ ./a.out
Enter number of petrol pumps
4
invoking CreateNode function
CreateNode function done
invoking GetInfo function
enter the amount of petrol in the petrol pump
10
enter the distance to the next petrol pump
20
enter the amount of petrol in the petrol pump
20
enter the distance to the next petrol pump
30
enter the amount of petrol in the petrol pump
60
enter the distance to the next petrol pump
40
enter the amount of petrol in the petrol pump
20
enter the distance to the next petrol pump
70
GetInfo function done
invoking FindStart function
no starting point
FindStart function done
*/





//atleast 1 petrol pump contains petrol>distance but path can be completed from that pump
/*
anikamath@ubuntu:~/Desktop$ ./a.out
Enter number of petrol pumps
5
invoking CreateNode function
CreateNode function done
invoking GetInfo function
enter the amount of petrol in the petrol pump
10
enter the distance to the next petrol pump
20
enter the amount of petrol in the petrol pump
20
enter the distance to the next petrol pump
30
enter the amount of petrol in the petrol pump
200
enter the distance to the next petrol pump
40
enter the amount of petrol in the petrol pump
20
enter the distance to the next petrol pump
70
enter the amount of petrol in the petrol pump
30
enter the distance to the next petrol pump
50
GetInfo function done
invoking FindStart function
Node Number 3 can be starting node
the route is 
3-4-5-1-2-3-
FindStart function done
*/



	
		
		
		
		
		
		
		
		
		
		
		


















	
	
	
	
	
	
		



















