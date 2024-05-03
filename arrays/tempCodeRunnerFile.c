#include<stdio.h>

int main() {
    int num, n, rem = 0, rev = 0;

    printf("Enter the number to check whether it's armstrong or not: ");
    scanf("%d", &num);

    n = num; // Correct assignment

    while (n > 0) {
        rem = n % 10;
        rev = rev + (rem * rem * rem);
        n = n / 10;
    }

    if (num == rev)
        printf("\nArmstrong");
    else 
        printf("\nNot Armstrong");

    return 0;
}
