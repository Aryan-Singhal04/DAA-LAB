int BinarySearch(int arr[],int l,int h,int k)
{
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==k)
        return mid;

        if(arr[mid]<k)
        l=mid+1;

        else
        h=mid-1;

    }
    return -1;
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
        i=BinarySearch(arr,0,t,k);
        if(i==-1)
        {printf("element not found");}
        else

        {printf("element found at index %d\n",i);}
    }
    return 0;
}
