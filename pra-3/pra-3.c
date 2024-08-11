#include<conio.h>
#include<stdio.h>
int main()
{
    int a[10],key, i, N=10;
    for (i=0; i<10; i++)
    {
        printf("Enter the value of array: \n");
        scanf("%d", &a[i]);
    }
    printf("Enter key:");
    scanf("%d", &key);
    i=0;
    while(a[i] != key)
        i++;
    if(i>=N)
    {
        printf("Unsuccesful Search");
    }
    else
    {
        printf("Succesful Search \n");
        printf("order of Key is : %d \n",i);
        printf("Value of Key is : %d",a[i]);
    }
    getch();
}