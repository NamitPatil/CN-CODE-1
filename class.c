#include<stdio.h>
int main()
{
	
	int firstoct=0;
	printf("Enter the value:");
	scanf("%d",&firstoct);
	
	if(firstoct>=0&&firstoct<=127)
	{
		printf("\nThe IP address belongs to class 'A'");
	}
	else if(firstoct>=128&&firstoct<=191)
	{
		printf("\nThe IP address belongs to class 'B'");
	}
	else if(firstoct>=192&&firstoct<=223)
	{
		printf("\nThe IP address belongs to class 'C'");
	}
	else if(firstoct>=224&&firstoct<=239)
	{
		printf("\nThe IP address belongs to class 'D'");
	}
	else if(firstoct>=240&&firstoct<=255)
	{
		printf("\nThe IP address belongs to class 'E'");
	}
	else
	{
		printf("\nThe IP address is invalid");
	}
}
