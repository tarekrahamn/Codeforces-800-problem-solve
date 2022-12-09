#include<stdio.h>
int main()
{
    int n,ans=0;
    int a[]={100,20,10,5,1};
    scanf("%d",&n);
    for(int i=0; i<5; i++)
    {
        ans= ans +n/a[i];
        n=n%a[i];
    }
    printf("%d",ans);
    return 0;
}