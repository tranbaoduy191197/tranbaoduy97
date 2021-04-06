#include <stdio.h>
#include <conio.h>

int main(void) {
	
	float c,f;
	
	printf ("This is  C and  F \n");
	printf ("Enter Celsius degree: ");
	scanf ("%f", &c);
	
	f=c/5*9+32;
	printf ("F is: %.2f", f);
	
	getch ();
	
	return 0;
}
