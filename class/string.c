#include<stdio.h>
int main()
{
    char s[100];
    int i, j;

    printf("Enter the string: ");
    scanf("%s", &s);

    for(i = 0; i<10; i++)
    {
        if(s[i] == 'x' ||s[i] == 'X')
        {
            s[i]= 'Y';
        }
    }
    printf("%s \n", s);
    return 0;
}