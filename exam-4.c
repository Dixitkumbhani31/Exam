#include<stdio.h>

main()

{
	int a=15,b=90,c=55,d=85;
	
	if(a>b)
	{
		if(b>c)
		{
			if(c>a)
			{
			   printf("a is max");	
			}
			else
			{
				printf("b is max");
			}
		}
		if(c>b)
		{
			printf("c is max");
		}
		else
		{
			printf("b is max");
		}
	}
	if(b>a)
	{
		printf("b is max");
	}
	else
	{
		printf("a is max");
	}
}
