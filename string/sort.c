#include<stdio.h>
#include<string.h>

int sort(char s[100], int n);
int main()
{
    int n;
    char s[100];

    printf("Enter the string to sort: ");
    gets(s);

    n = strlen(s);

    sort(s,n);

    printf("The ascended string is: \n%s",s);
    
    
    return 0;
}

int sort(char s[100],int n)
{
    int i, j, temp;

    for(i = 0; i<n-1; i++)
    {
        for(j = i+1; j<n; j++)
        if(s[i]>s[j])
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }
    return s;
}