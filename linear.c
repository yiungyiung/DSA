#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int item;
    int ind = -1;
    scanf("%d", &item);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == item)
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        printf("Item not found");
    }
    else
    {
        printf("Item found at index %d", ind);
    }
}