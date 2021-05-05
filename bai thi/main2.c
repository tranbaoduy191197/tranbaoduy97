#include<stdio.h>  
#include<conio.h>  




void main(){  
	int n,m,sum;  
	printf("Nhap mot so bat ky: ");  
	scanf("%d",&n);  
	while(n>0)  
	{  
		m=n%10;  
		
		sum += m;  
		
		n=n/10;  
	}  
	printf("\nTong cac so trong so nguyen da cho la  = %d",sum);
}
