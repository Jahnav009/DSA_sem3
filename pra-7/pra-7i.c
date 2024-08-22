#include<stdio.h>
#include<conio.h>
int gcd(int,int);
void main()
{
    int a,b,result;
    
    printf("Enter the value:");
    scanf("%d %d",&a,&b);

    result=gcd(a,b);

    printf("The result is: %d",result);
    getch();
}
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            return(gcd(a-b,b));
        else
            return(gcd(a,b-a));
    }
    return a;
}