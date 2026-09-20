#include <stdio.h>
 
void removeDuplicates(long long arr[], int *n)
{
    if (*n == 0) return;
 
    int k = 1;
    for (int i = 1; i < *n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[k++] = arr[i];
        }
    }
    *n = k;
}
 
int main()
{
    int t;
    scanf("%d", &t);
 
    while (t--)
    {
        int n;
        scanf("%d", &n);
 
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
 
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    long long temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
 
        removeDuplicates(arr, &n);
        int maxLen = 1;
        int currLen = 1;
 
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1] + 1)
            {
                currLen++;
            }
            else
            {
                if (currLen > maxLen)
                    maxLen = currLen;
                currLen = 1;
            }
        }
 
        if (currLen > maxLen)
            maxLen = currLen;
        printf("%d
", maxLen);
    }
 
    return 0;
}