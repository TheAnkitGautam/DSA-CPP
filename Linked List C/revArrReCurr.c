#include <stdio.h>

void swap(int arr[], int l, int r);
void reverse(int arr[], int start, int end)
{
    if (start < end)
    {
        swap(arr, start, end);
        reverse(arr, start + 1, end - 1);
    }
}
void swap(int arr[], int l, int r)
{
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
}
int main()
{
    int n;
    printf("Enter size of the Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    reverse(arr, 0, n - 1);
    printf("Reversed Array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}