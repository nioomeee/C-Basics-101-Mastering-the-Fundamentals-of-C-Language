#include<stdio.h>

float Square(float side);
float Circle(float rad);
float Rect(float l, float b);

int main()
{
    int side, rad, l, b;
    printf("\nEnter the side of square: ");
    scanf("%d", &side);
    
    printf("The area of square is : %f", Square(side));
    
    printf("\nEnter the radius of circle : ");
    scanf("%d", &rad);
    Circle(rad);
    printf("\nThe area of circle is : %f", Circle(rad));

    printf("\nEnter the length of rectangle: ");
    scanf("%d", &l);    
    printf("\nEnter the breadth of rectangle: ");
    scanf("%d", &b);
    Rect(l,b);
    printf("\nThe area of rectangle is : %f", Rect(l,b));

}

float Square(float side)//definition of area of square
{
    return side*side;
}

float Circle(float rad) //def of area of circle
{
    return rad*3.14;
}

float Rect(float l, float b)
{
    return l*b;
}
