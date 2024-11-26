// WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.
#include <stdio.h>
int maximum(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    printf("ente the size of array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = maximum(arr, n);
    printf("max number in array is %d", max);

    return 0;
}
