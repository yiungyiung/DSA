#include <iostream>
using namespace std;
void printarr(int a[], int n, int s)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;
}
void bubble(int a[], int n)
{
    int i, j, temp, switches = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                switches++;
            }
        }
    }
    cout << "using bubble sort" << endl;
    printarr(a, n, switches);
}
void insertion(int a[], int n)
{
    int i, j, temp, switches = 0;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && temp <= a[j])
        {
            a[j + 1] = a[j];
            j--;
            switches++;
        }
        a[j + 1] = temp;
    }
    cout << "using insertion sort" << endl;
    printarr(a, n, switches);
}
void selection(int a[], int n)
{
    int i, j, min, temp, switches = 0;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < min)
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
            switches++;
        }
    }
    cout << "using selection sort" << endl;
    printarr(a, n, switches);
}
int partition(int a[], int lb, int ub) {
    int pivot = a[lb]; 
    int down = lb + 1; 
    int up = ub;

    while (down <= up) {
        while (down <= up && a[down] <= pivot) {
            down++;
        }
        while (a[up] > pivot) {
            up--;
        }
        if (down < up) {
            int temp = a[down];
            a[down] = a[up];
            a[up] = temp;
        }
    }

    int temp = a[lb];
    a[lb] = a[up];
    a[up] = temp;
    return up;
}
void quicksort(int a[], int lb, int ub) {
    if (lb >= ub) 
        return;

    int j = partition(a, lb, ub);
    quicksort(a, lb, j - 1);
    quicksort(a, j + 1, ub);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubble(a, n);
    insertion(a, n);
    selection(a, n);
    quicksort(a,0,n-1);
    cout << "using quick sort" << endl;
    printarr(a,n,0);
    return 0;
}