#include<stdio.h>
void gst(float val);

int main()
{
    float val;
    printf("\nEnter the value:");
    scanf("%f", &val);
    gst(val);
    printf("\nValue is: %.0f", val);
    return 0;

}

void gst(float val)
{
    val= val+(0.18 * val);
    printf("\nFinal price is: %f", val);
}