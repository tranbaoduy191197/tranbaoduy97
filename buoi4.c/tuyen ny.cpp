#include<stdio.h>

 
 int main (void)
{
	int a;
	char  x , y , name[150];
	printf("Enter name:");
	gets (name);
	
	printf(" gioi tinh: (m: male, f: female): ");
	scanf("%c", &x);
	fflush(stdin);
	
	printf(" so tuoi MyL: ");
	scanf ("%d", &a);
	fflush(stdin);
	
	printf(" tinh cach: (k: kute , b: bad): ");
	scanf("%c",&y);
	
	
	if ( x == 'f' )
	{
		if ( a>18 && a<25 )
	    { 
			if ( y= 'k')
	      		printf("ok luon: ");
		} 
		else
		{ 
			printf(" Can phai can nhac them: "); 
            if (y = 'b')
		  	{
		  		printf(" oh no :");
		  	}
	    }
	
		
    }else
    
    if( x == 'm')
    printf (" Thoi bo di:");
 
    return 0;
}
