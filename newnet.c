#include<stdio.h>
int classbin(int n,int a[])
{
	int s1[7]={255.0.0.0},s2[7]={255.255.0.0},s3[7]={255.255.255.0},anding[7],i;
	if(a[0]>=0 && a[0]<=127)
	{
		printf("ip address belongs to class A ");
		
		for(i=0;i<7;i++)
	     {
		anding[i]=a[i]&s1[i];
	     }
	
	printf("\n%d.%d.%d.%d",anding[0],anding[1],anding[2],anding[3]);
		
	}
	else if(a[0]>=128 && a[0]<=191)
	{
		printf("ip address belongs to class B ");
		
		for(i=0;i<7;i++)
	     {
		anding[i]=a[i]&s2[i];
	     }
	
	printf("\n%d.%d.%d.%d",anding[0],anding[1],anding[2],anding[3]);
	}
	else if(a[0]>=192 && a[0]<=223)
	{
		printf("ip address belongs to class C ");
		
		for(i=0;i<7;i++)
	     {
		anding[i]=a[i]&s3[i];
	     }
	
	printf("\n%d.%d.%d.%d",anding[0],anding[1],anding[2],anding[3]);
	}
	else if(a[0]>=224 && a[0]<=239)
	{
		printf("ip address belongs to class D ");
		printf("no net id for class D ");
		
	}
	else 
	{
		printf("ip address belongs to class E ");
		printf("no net id for class E ");
	}
	
}
int main()
{
	int n=8,i,a[7];
	printf("enter valid ip address :");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	classbin(n,a);
	
}
