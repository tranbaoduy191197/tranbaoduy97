#include <stdio.h>
#include <stdlib.h>


int main()
{
    char str[250];
    int x;
 
    printf("Enter string: ");
    gets(str);

    for(x=0; str[x]!='\0'; x++)
    {
        if(str[x]>='A' && str[x]<='Z')
        {
            str[x] = str[x] + 32;
        }
    }

    printf("Upper case: %s", str);
	return 0;
}
