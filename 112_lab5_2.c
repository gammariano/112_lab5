#include<stdio.h>
int main()
{
    int i,j,k,l,n,m=0;
    scanf("%d" ,&n);
    m=n;
    if(n%2==0)
    {
        n--;
        m++;
        k=((n+m)/2)-1;
    }
    else
    {
        k=((n+m)/2);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m-1;j++)
        {
            printf("_");
        }
        for(k=0;k<=2*i-2;k++)
        {
            printf("*");
        }
        for(l=1;l<m;l++)
        {
            printf("_");
        }
        m--;
        printf("\n");
    }
    return 0;
}
