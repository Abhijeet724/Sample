  division method
#include<stdio.h>
void hash(int a[],int size,int key);
void search(int a[],int size,int sea);
int main()
{
	int a[10],key,i,sea;
	for(i=0;i<3;i++)
	{
	printf("enter the key element= ");
	scanf("%d",&key);
	hash(a,10,key);
    } 

   	printf("enter the element to be searched= ");
	scanf("%d",&sea);
	search(a,10,sea);

	return 0;
}

void hash(int a[],int size,int key)
{
	int index=key%size;
	a[index]=key;
	printf("the a[%d]= %d\n",index,key);
	
}

void search(int a[],int size,int sea)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(a[i]==sea)
		{
			printf("the element is present at %d",i);
			break;
		}
	
	}
}


mid square method
#include<stdio.h>
void hash(int a[],int size,int key);
void search(int a[],int size,int sea);
int main()
{
	int a[100],i,key,sea;
	printf("NOTE: YOU CAN STORE THE NUMBERS BETWEEN 32 TO 99\n");
	for(i=0;i<3;i++)
	{
		printf("enter the key= ");
		scanf("%d",&key);
		hash(a,100,key);
	}
	
	printf("enter the element to be searched= ");
	scanf("%d",&sea);
	search(a,100,sea);
	return 0;
}

void hash(int a[],int size,int key)
{
	int index,i,digit[4],mul,num;
	mul=key*key;
	
	for(i=3;i>=0;i--)
	{
	    num=mul%10;
	    mul=mul/10;
	    
		digit[i]=num;	
	}
	
	index=(digit[1]*10)+digit[2];
	a[index]=key;
	printf("the array[%d]=%d\n",index,key);
	
}

void search(int a[],int size,int sea)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(a[i]==sea)
		{
			printf("the element is present at %d",i);
			break;
		}
	
	}
}

//// folding method
#include<stdio.h>
void hash(int a[],int size,int key);
int main()
{
	int a[10],i,key;
	for(i=0;i<3;i++)
	{
		printf("enter the key element=");
		scanf("%d",&key);
		hash(a,10,key);
	}
	
	return 0;
}

void hash(int a[],int size,int key)
{
	int mul,index,i,num,sum=0;
	mul=key*key;
	for(i=0;i<4;i++)
	{
		num=mul%10;
		sum=sum+num;
		mul=mul/10;
		
	}
	index=
}
