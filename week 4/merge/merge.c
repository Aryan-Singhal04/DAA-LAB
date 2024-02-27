
#include <stdio.h>
void merge(int l, int mid, int r, int arr[])
{
    int n1 = mid - l + 1, n2 = r - mid;
    int L[n1], R[n2];
    int i = l, k = 0,j;
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temp arrays back
    // into arr[l..r]
    // Initial index of first subarray
    i = 0;
    // Initial index of second subarray
    j = 0;
    // Initial index of merged subarray
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // Copy the remaining elements
    // of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int l,int r,int arr[])
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(l,mid,arr);
        mergesort(mid+1,r,arr);
        merge(l,mid,r,arr);
    }
}


int main()
{
    int n,i;
    int c;
printf("enter no test cases");
scanf("%d",&c);
    printf("Enter no of elements:");
    scanf("%d",&n);
     for(int i=0;i<n;i++)
    {

    int arr[n];

    printf("Enter data in array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    mergesort(0,n,arr);
    printf("sorted array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    }

    return 0;
}
