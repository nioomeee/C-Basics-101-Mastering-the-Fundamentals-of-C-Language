#include<stdio.h>

int main()
{
    int i;
    FILE *fp;

    fp = fopen("random.txt", "w");

    for(i = 0; i<101; i++)
    {
        fprintf(fp, "%d\n", i);
    }
    

    fclose(fp);

    return 0;
}