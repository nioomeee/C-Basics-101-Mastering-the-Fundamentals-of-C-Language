#include <stdio.h>

float Far(float f);
float Cel(float c);

int main() {
    char temp;
    int f, c;
    printf("Enter 'f' for Fahrenheit and 'c' for Celsius: ");
    scanf(" %c", &temp);

    if (temp == 'f') 
    {
        printf("Enter the value in Fahrenheit: ");
        scanf("%d", &f);
        printf("%d Fahrenheit in Celsius is %.2f Celsius\n", f, Far(f));
    } 
    else if (temp == 'c') 
    {
        printf("Enter the value in Celsius: ");
        scanf("%d", &c);
        printf("%d Celsius in Fahrenheit is %.2f Fahrenheit\n", c, Cel(c));
    } 
    else 
    {
        printf("Invalid input. Please enter 'f' or 'c'.\n");
    }

    return 0;
}

float Far(float f) 
{
    float cel;
    cel = (f - 32) * 5.0 / 9.0;
    return cel;
}

float Cel(float c) 
{
    float far;
    far = (c * 9.0 / 5.0) + 32;
    return far;
}
