#include<stdio.h>

int rev(int arr[], int n); //declaration
int print(int arr[], int n);

int main()
{
    int n, 
    printf("\n Enter the number of variables: ");
    scanf("%d", &n);
    rev(arr[n], n);
    print(arr[n], n);

}

int rev(int arr[], int n)
{
    for(int i=1; i<n/2; i++)
        {
            int firstVal=arr[i];
            int secondVal = arr[n-i-1];
        }
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
}
int print(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");
}