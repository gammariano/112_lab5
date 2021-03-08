#include<stdio.h>
int main()
{
    int i,j,k1=0,k2=0,k3=0,k4=0,m,n;
    int num[10][10];
    scanf("%d" ,&n);
    scanf("%d" ,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d" ,&num[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            num[i][j]+=k1;
            k1=num[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=1;j<=m;j++)
        {
            num[i][j]+=k2;
            k2=num[i][j];
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=0;j<m;j++)
        {
            num[i][j]+=k3;
            k3=num[i][j];
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            num[i][j]+=k4;
            k4=num[i][j];
        }
    }
    return 0;
}
