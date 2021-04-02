#include<stdio.h>

int main( void)
{
	int num1; 
	int num2;
	
	printf("enter two integer , and i will tellyou\n");
	printf("the relationships they satisfy:");
	
	scanf("%d%d",&num1, &num2);
	
	if(num1 == num2)
	{
		printf("%d is equal to %d\n", num1 ,num2);
	}
	
	if (num1 != num2)
	{
		printf("%dis not equal to %d\n", num1 , num2);
	}
	
	if (num1 < num2)
	{
		printf("%dis less than %d\n", num1 , num2);
	}
	
	if ( num1 > num2)
	{
		printf("%d is greater than %d\n", num1, num2);
	}
	
	if ( num1 <= num2 )
	{
		printf("%d is less than or equal to %d\n", num1 , num2);
	}
	
	if (num1 >= num2)
	{
		printf("%dis greater than or equal to %d\n", num1 , num2);
	}
	
	return 0;
}
