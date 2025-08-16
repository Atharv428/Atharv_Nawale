#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n-1], Total_sum = 0, Sum = 0;
    printf("Enter the array elements:\n");
    for(int i = 0; i < n-1; i++)
        scanf("%d", &arr[i]);

    Total_sum = n * (n + 1) / 2;
    for(int i = 0; i < n-1; i++)
        Sum += arr[i];

    int Miss_no = Total_sum - Sum;
    printf("Missing Number is: %d\n", Miss_no);

    return 0;
}
