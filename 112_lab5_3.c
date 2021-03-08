#include<stdio.h>
int UglyNumber(int n)
{
    int num[40]={1};
    int i,j,l=1,m,r=100000000,ans=-1,c;
    for(i=1;i<=30;i++)
    {
         num[i]=num[i-1]*2;
    }
    while(l<=r)
    {
        m=l+((r-1)/2);
        c=0;
        for(i=1;i<=m;i*=5)
        {

        }
    }
}
int main()
{
    int n;
    scanf("%d" ,&n);
    UglyNumber(n);
    printf("%d" ,n);
    return 0;
}
