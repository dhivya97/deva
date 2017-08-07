#include <stdio.h>
void main()
{
printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d an %d are: ", low, high);

    for(i = low + 1; i < high; ++i)
    {
        temp2 = i;
        temp1 = i;

        
        while (temp1 != 0)
        {
            temp1 /= 10;
       }
       return0;
        }
