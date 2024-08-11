#include <stdio.h>

#define ROWS 3
#define COLS 3

void printRowMajor(int arr[ROWS][COLS]);
void printColumnMajor(int arr[ROWS][COLS]);

int main()
{
    int arr[ROWS][COLS] = {{1, 2},{3, 4},{5, 6}};
    printf("Array in Row-Major Order:\n");
    printRowMajor(arr);

    printf("\nArray in Column-Major Order:\n");
    printColumnMajor(arr);

    return 0;
}
void printRowMajor(int arr[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void printColumnMajor(int arr[ROWS][COLS])
{
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < ROWS; i++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
