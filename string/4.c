#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int a[256] = {0};
    int i;
    printf("Enter the string: ");
    gets(s);

    

    for(i= 0; s[i]!='\0'; i++)
    {
        a[(int)s[i]]++;
    }
    
     for(i= 0; i<255; i++)
    {
        if(a[i]!=0)
        {
            printf("The character %c appears %d times\n", i, a[i]);
        }
    }

    return 0;
}
