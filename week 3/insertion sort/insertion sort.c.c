#include<stdio.h>
int main()
{
int i,j,n,t;
int c;
printf("enter no test cases");
scanf("%d",&c);
for(int i=0;i<c;i++){
    printf("enter size :");
    scanf("%d",&n);
    printf("Enter elements:");
    int a[n];
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    printf("array is:");
    for(i=0;i<n;i++)
    {printf("%d ",a[i]);}
    printf("\n");
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while(j>=0 && a[j]>t)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
    printf("sorted array is:");
    for(i=0;i<n;i++)
    {printf("%d ",a[i]);}
    printf("/n");
    }
return 0;
}
