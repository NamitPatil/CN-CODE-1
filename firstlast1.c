#include<stdio.h>
int classbin(int n,int oct[])
{
	if(oct[0]==0)
	{
		printf("ip address belongs to class A ");
	}
	else if(oct[1]==0)
	{
		printf("ip address belongs to class B ");
	}
	else if(oct[2]==0)
	{
		printf("ip address belongs to class C ");
	}
	else if(oct[3]==0)
	{
		printf("ip address belongs to class D ");
	}
	else 
	{
		printf("ip address belongs to class E ");
	}
	
}
int main()
{
	int n=8,i,oct[8];
	printf("enter first octate in binary");
	for(i=0;i<n;i++)
	{
		scanf("%d",&oct[i]);
	}
	classbin(n,oct);
	
}
