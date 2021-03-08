#include<stdio.h>
int main()
{
    int i,j,k1=0,k2=0,k3=0,k4=0,k5=0,k6=0,k7=0,k8=0,m,n;
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
            k5=num[i][j]+k1;
            k1=k5;
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=1;j<=m;j++)
        {
            k6=num[i][j]+k2;
            k2=k6;
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=0;j<m;j++)
        {
            k7=num[i][j]+k3;
            k3=k7;
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            k8=num[i][j]+k4;
            k4=k8;
        }
    }
    if(k5>k6&&k5>k7&&k5>k8)
    {
        printf("%d" ,k5);
    }
    else if(k6>k5&&k6>k7&&k6>k8)
    {
        printf("%d" ,k6);
    }
    else if(k7>k5&&k7>k6&&k7>k8)
    {
        printf("%d" ,k7);
    }
    else if(k8>k5&&k8>k6&&k8>k7)
    {
        printf("%d" ,k8);
    }
    return 0;
}
