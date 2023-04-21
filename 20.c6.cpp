#include<stdio.h>

main()
{
	int a=1,n;
	printf("enter value=");
	scanf("%d",&n);
	
	while(n>=a)
	{
			if(n%2==1)
		{
		 	printf("%d\n",n);
		}
		 n--;
	}
}
