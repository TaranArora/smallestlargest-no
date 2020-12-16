#include<stdio.h>

int main()
{
    char a[50], size, i, large, small;

    printf("Enter the size of the array: \n");
    scanf("%d", &size);

    printf("Enter the %d elements of the array: \n", size);
    for(i = 0; i < size; i++)
    scanf("%d", &a[i]);

    large = a[0];

    for(i = 1; i < size; i++)
    {
        if(large < a[i]){

            large = a[i];
        }
    }
    printf("The largest element is: %d\n", large);

    small = a[0];

    for(i = 1; i < size; i++)
    {
        if(small>a[i])
        {
            small = a[i];
        }
    }
    printf("The smallest element is: %d\n", small);
    return 0;
}