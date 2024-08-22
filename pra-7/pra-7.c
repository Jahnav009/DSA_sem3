#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
    int num;
    int factorial;
    printf("Enter the value: ");
    scanf("%d",&num);
    factorial = fact(num);
    printf("\n value of factorial is: %d", factorial);
    getch();
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return(n*fact(n-1));
}