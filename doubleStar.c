#include <stdio.h>

int main()
{
    printf("Enter the number of rows you want for the double star pattern:\n");
    int rows;
    scanf("%d", &rows);
    int count = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= 2 * rows - 1; j++)
        {

            if (j <= count || j >= (2 * rows) - count)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        count++;
        printf("\n");
    }
    return 0;
}