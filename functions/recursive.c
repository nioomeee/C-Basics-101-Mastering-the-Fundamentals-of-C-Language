#include <stdio.h>
void HW(int count);

int main()
{
    int count;
    printf("Enter the number of recursions: \n");
    scanf("%d", &count);
    HW(count);
    return 0;
}

void HW(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello World!\n");
    HW(count - 1);
}