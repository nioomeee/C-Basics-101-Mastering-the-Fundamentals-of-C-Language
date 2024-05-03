#include<stdio.h>
int main()
{
    int i, j, n;
    char s[70];

    printf("Enter the string: ");
    scanf("%s", &s);

    
    n = sizeof(s);
    printf("The sizeof string is %zu bytes\n", n);
    return 0;
    
}