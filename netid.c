#include<stdio.h>
#include<math.h>
int classbin(int n,int a[])
{
	int s1[4]={255,0,0,0},s2[4]={255,255,0,0},s3[4]={255,255,255,0},anding[4],i,p,oring[4];
	int o1[4]={0,255,255,255},o2[4]={0,0,255,255},o3[4]={0,0,0,255};
	if(a[0]>=0 && a[0]<=127)
	{
		printf("ip address belongs to class A ");
		
		for(i=0;i<4;i++)
	     {
		anding[i]=a[i]&s1[i];
	     }
	
	printf("\nFirst address:%d.%d.%d.%d",anding[0],anding[1],anding[2],anding[3]);
	p=pow(2,(32-8));
	    printf("\n no of addresses in class a = %d",p);
	    for(i=0;i<4;i++)
	     {
		oring[i]=anding[i]^o1[i];
	     }
	printf("\nlast address:%d.%d.%d.%d",oring[0],oring[1],oring[2],oring[3]);
		
	}
	else if(a[0]>=128 && a[0]<=191)
	{
		printf("ip address belongs to class B ");
		
		for(i=0;i<4;i++)
	     {
		anding[i]=a[i]&s2[i];
	     }
	
	printf("\nFirst address :%d.%d.%d.%d",anding[0],anding[1],anding[2],anding[3]);
	p=pow(2,(32-16));
	    printf("\nno of addresses in class b = %d",p);
	    
	    for(i=0;i<4;i++)
	     {
		oring[i]=anding[i]^o2[i];
	     }
	printf("\nlast address:%d.%d.%d.%d",oring[0],oring[1],oring[2],oring[3]);
	}
	else if(a[0]>=192 && a[0]<=223)
	{
		printf("ip address belongs to class C ");
		
		for(i=0;i<4;i++)
	     {
		anding[i]=a[i]&s3[i];
	     }
	
	printf("\nFirst address:%d.%d.%d.%d",anding[0],anding[1],anding[2],anding[3]);
	p=pow(2,(32-24));
	    printf("\nno of addresses in class c = %d",p);
	
	    for(i=0;i<4;i++)
	     {
		oring[i]=anding[i]^o3[i];
	     }
	printf("\nlast address:%d.%d.%d.%d",oring[0],oring[1],oring[2],oring[3]);
	}
	else if(a[0]>=224 && a[0]<=239)
	{
		printf("ip address belongs to class D ");
		printf("\nno net id for class D ");
		
	}
	else 
	{
		printf("ip address belongs to class E ");
		printf("\nno net id for class E ");
	}
	
}
int main()
{
	int n=8,i,a[4];
	printf("enter valid ip address :");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	classbin(n,a);
	
}
