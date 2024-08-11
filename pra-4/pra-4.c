#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
    int a[N]={10,20,30,40,50};
    int x;
    int binary(int *a,int x);
    printf("Enter Element to search: ");
    scanf("%d",&x);
    binary(a,x);
    getch();
}
    int binary(int *a,int x)
    {
        int LOW=0;
        int HIGH=N-1;
        int MIDDLE;
        while(LOW<=HIGH)
        {
            MIDDLE=(LOW+HIGH)/2;
            if(x<a[MIDDLE])
            {
                HIGH=MIDDLE-1;
            }
            else if(x>a[MIDDLE])
            {
                LOW=MIDDLE+1;
            }
            else
            {
                printf("Element is found");
                return 1;
            }
        }
        printf("Element is NOt found");
        return 0;
    }