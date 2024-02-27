#include <stdio.h>
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int l,int h,int arr[])
{
    int pivot=arr[l];
    int i=l,j=h;
    while(i<j)
    {
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);
        if(i<j)
        {swap(&arr[i],&arr[j]);}
    }
    swap(&arr[l],&arr[j]);
    return j;
}
void quicksort(int l,int h,int arr[])
{
    int j;
    if(l<h)
    {
        j=partition(l,h,arr);
        quicksort(l,j,arr);
        quicksort(j+1,h,arr);
    }
}

int main()
{
    int n,i;
    printf("Enter no of elements:");
    scanf("%d",&n);

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

    quicksort(0,n,arr);
    printf("sorted array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

 return 0;
}
