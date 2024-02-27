#include <stdio.h>

int linearSearch (int arr[],int n,int k)
{

    if(n==0)
    {return -1;}

    if(arr[n-1]==k)
    {return n-1;}
    return linearSearch(arr,n-1,k);
}



int main()
{
    int n,k,i;
    printf("enter no of cases");
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        int t;
        printf("Enter no of elements:");
        scanf("%d",&t);

        int arr[n];

        printf("Enter data in array:\n");
        for (int i = 0; i < t; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("enter element to search:");
        scanf("%d",&k);
        i=linearSearch(arr,t,k);
        if(i==-1)
        {printf("element not found");}
        else

        {printf("element found at index %d\n",i);}
    }
    return 0;
}
