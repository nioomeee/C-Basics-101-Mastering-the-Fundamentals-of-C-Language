//verryyyy important 
#include<stdio.h>
#include<string.h>

int main()
{
    int i, maxn, freq[300]= {0}; //never forget to initialize aavi array;
    char a[100], maxc;
    printf("Enter the string: ");
    gets(a);

    for(i = 0; a[i]!=0; i++)
    {
        freq[(int)a[i]]++;
        //array ma plus thase count darek box ma darek ascii value mate
    }
    
    maxn =0;//initialize kryu 

    for(i=0; i<300; i++)
    {
        if(freq[i]>maxn)
        {
            maxn = freq[i];//maxn ma store kryu freq aapde je darek ascii value joiye chiye ee number format ma
            maxc = (char)i;//same vastu ne character ma store kri 
        }

    }


    printf("The maxiumum times occuring character is %c and it occurs %d times.", maxc, maxn);

    
    return 0;
}