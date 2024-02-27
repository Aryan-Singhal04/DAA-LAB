
#include <stdio.h>

void selectsort(int n,int arr[])
{
    int imin;
    for(int i=0;i<n-1;i++)
    {
        imin=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[imin])   //finding min element in array
            {
                imin=j;
            }
        }
        //if min element found in array other than first element swap it
        if(imin!= i)
        {
            int t=arr[i];
            arr[i]=arr[imin];
            arr[imin]=t;
        }
    }
}

int main()
{
    int n,i,c;
   printf("enter no of cases");
    scanf("%d",&c);
    for(int j=0;j<c;j++)
    {
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

        selectsort(n,arr);
        printf("sorted array is:");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("/n");

    }
    return 0;
}
