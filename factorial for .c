#include<stdio.h>

main()
{
	int a,n,fact=1;

	printf("enter value=");
	scanf("%d",&n);

	for(a=1;a<=n;a++)
	{
		fact=fact*a;
		
	}
	    printf("factorial of %d=%d",n,fact);
}
