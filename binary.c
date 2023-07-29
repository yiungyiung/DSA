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
    scanf("%d", &item);
    int ind = -1;
    int mid = 0;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        mid = (int)((l + r) / 2);
        if (a[mid] == item)
        {
            ind = mid;
            break;
        }
        else if (item > a[mid])
        {
            l = mid + 1;
        }
        else if (item <= a[mid])
        {
            r = mid - 1;
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